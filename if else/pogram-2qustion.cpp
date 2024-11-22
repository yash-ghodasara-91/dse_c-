#include <iostream>
using namespace std;

int main() {
    // Ask the user to input an integer
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    // Use an if-else statement to determine if the number is odd or even
    if (a % 2 == 0) {
        cout << "The number " << a << " is even." << endl;
    } else {
        cout << "The number " << a << " is odd." << endl;
    }

    return 0;
}
