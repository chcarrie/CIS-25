#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void displayMenu() {
    cout << "\n===== SHOPPING CART =====\n";
    cout << "1. Add item to cart\n";
    cout << "2. View checkout\n";
    cout << "3. Exit\n";
    cout << "Choose an option:\n";
}

class Item {
public:
    string name;
    double price;
    int quantity;

    double getTotalPrice() {
        return price * quantity;
    }
};

void saveToFile(const Item& item, const string& fileName) {
    ofstream file(fileName, ios::app);
    file << item.name << "," << item.price << "," << item.quantity << "\n";
    file.close();
}

void readFromFile(const string& fileName) {
    ifstream file(fileName);
    string line;
    double total = 0;

    if (!file.is_open()) {
        cout << "Could not open file.\n";
        return;
    }

    while (getline(file, line)) {
        Item item;
        stringstream ss(line);
        getline(ss, item.name, ',');
        string priceStr, quantityStr;
        getline(ss, priceStr, ',');
        getline(ss, quantityStr);

        item.price = stod(priceStr);
        item.quantity = stoi(quantityStr);

        double cost = item.getTotalPrice();
        cout << item.name << " - $" << item.price << " x " << item.quantity
             << " = $" << cost << "\n";
        total += cost;
    }

    cout << "--------------------------------\n";
    cout << "\nTotal: $" << total << "\n";
    file.close();
}


int main() {
    Item item;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            cout << "Enter item name: ";
            cin >> item.name;
            cout << "Enter item price: ";
            cin >> item.price;
            cout << "Enter item quantity: ";
            cin >> item.quantity;
            saveToFile(item, "cart.txt");
            cout << "Item added to cart.\n";
        }
        else if (choice == 2) {
            readFromFile("cart.txt");
        }
        else if (choice == 3) {
            cout << "Thank you for shopping!\n";
        }
        else {
            cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
