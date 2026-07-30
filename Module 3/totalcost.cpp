#include <iostream>

using namespace std;
int main() {
    string itemName;
    int quantity;
    float costPerItem;
    
    cout << "Enter name of item: \n";
    cin >> itemName;
    cout << "Enter item quantity: \n";
    cin >> quantity;
    cout << "Enter cost per item: \n";
    cin >> costPerItem;

    float totalCost;
    totalCost = quantity * costPerItem;

    cout << "Total cost for " << quantity << " " << itemName << "(s) is: $" << totalCost << "\nPlease pay at the front, credit card only, no cash please.";
    
    return 0;
}