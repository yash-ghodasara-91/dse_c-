#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;

    // Input: three numbers from the user
    cout << "Enter the value of the first number: ";
    cin >> a;

    cout << "Enter the value of the second number: ";
    cin >> b;

    cout << "Enter the value of the third number: ";
    cin >> c;

    // Logic: Using nested if statements
    if (a <= b) {
        if (a <= c) {
            cout << "The minimum value is: " << a << endl;
        } else {
            cout << "The minimum value is: " << c << endl;
        }
    } else {
        if (b <= c) {
            cout << "The minimum value is: " << b << endl;
        } else {
            cout << "The minimum value is: " << c << endl;
        }
    }

    return 0;
}
