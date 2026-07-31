#include <iostream>
#include <math.h>
#include <random>

using namespace std;

void showMenu() {
    cout << "\nMenu Options:\n";
    cout << "1 - Say hi\n";
    cout << "2 - Tell me a joke\n";
    cout << "3 - Add some numbers\n";
    cout << "4 - Exit and quit\n";
    cout << "Enter your choice: (1-4 only)\n";
}

int randomNumGenerator() {
    random_device rd;
    mt19937 gen(rd());
    int randomNum = gen();
    return randomNum;
}

string getGreeting() {
    int randomNum = randomNumGenerator();

    if (randomNum % 3 == 0) {
        return "Salutations.\n";
    } else if (randomNum % 3 == 1) {
        return "Sup?\n";
    } else {
        return "Hello!";
    }
}

string getJoke() {
    int randomNum = randomNumGenerator();

    if (randomNum % 3 == 0) {
        return "Why did the student flunk out of magician school?\nThe tests had too many trick questions.\n";
    } else if (randomNum % 3 == 1) {
        return "What do you call a cow with no legs?\nGround beef.\n";
    } else {
        return "Why don't scientists trust atoms?\nBecause they make up everything!\n";
    }
}

int addingMachine(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int menuOption;

    // Menu options
    showMenu();
    cin >> menuOption;

    while (menuOption > 0) {
        if (menuOption == 1) {
            cout << getGreeting();
        } else if (menuOption == 2) {
            cout << getJoke();
        } else if (menuOption == 3) {
            int n1, n2;
            cout << "Enter two numbers to add: ";
            cin >> n1 >> n2;
            cout << "Sum: " << addingMachine(n1, n2) << "\n";
        } else if (menuOption == 4) {
            cout << "That's all, goodbye!";
            return 0;
        } else {
            cout << "Not a valid option. No action for you!\nTry again.\n";
        }
        showMenu();
        cin >> menuOption;
    }
}