#include <iostream>

using namespace std;

int main() {
    int menuOption;

    // Menu options
    cout << "Menu Options:\n";
    cout << "1 - Say hi\n";
    cout << "2 - Tell me a joke\n";
    cout << "3 - Add some numbers\n";
    cout << "4 - Exit and quit\n";
    cout << "Enter your choice: (1-4 only)\n";
    cin >> menuOption;

    if (menuOption == 1) {
        cout << "Salutations.\n";
    } else if (menuOption == 2) {
        cout << "Why did the student flunk out of magician school?\n";
        cout << "The tests had too many trick questions.\n";
    } else if (menuOption == 3) {
        int n1, n2;
        cout << "Enter two numbers to add: ";
        cin >> n1 >> n2;
        cout << "Sum: " << (n1 + n2) << "\n";
    } else if (menuOption == 4) {
        cout << "Exiting the program.\n";
    } else {
        cout << "Not a valid option. No action for you!\n";
    }

    cout << "That's all, goodbye!";

    return 0;
}