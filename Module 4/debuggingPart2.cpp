#include <iostream>

using namespace std;

int main() {
    // Errors: 
    //   - added commas between variables
    //   - used semicolon at the end to signify end of line
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    // Errors: 
    //   - used double arrows (>>) instead of single arrow (>)
    //   - correctly assign each input to respective variable (n1, n2, n3)
    cin >> n1 >> n2 >> n3;

    // Errors: 
    //   - for comparing if n1 is bigger than n2 and n3, use >=
    //   - added missing parenthesis to close out if conditions
    //   - enclosed if statements in braces to define actions if true
    if (n1>=n2 && n1>=n3) {
        cout << "Largest number: " << n1;
    }

    // Errors:
    //   - corrected cout msg to display second variable, n2, if highest
    //   - for comparing if n2 is bigger than n1 and n3, use >=
    //   - added missing right brace to close out if statements
    if (n2>=n1 && n2>=n3) {
        cout << "Largest number: " << n2;
    }

    // Errors:
    //   - added missing left brace to close out if statements
    //   - corrected cout msg to display third variable, n3, if highest
    if (n3>=n1 && n3>=n2) {
        cout << "Largest number: " << n3;
    }

    return 0;
}