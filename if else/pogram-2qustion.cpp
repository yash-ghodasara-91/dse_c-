#include <iostream>
using namespace std;

int main() {
    
    cout << "--------------------------------------------------------------------\n"; 
    int a;
    cout << "Enter an integer: ";
    cin >> a;

   
    if (a % 2 == 0) {
        cout << "The number " << a << " is even." << endl;
    } else {
        cout << "The number " << a << " is odd." << endl;
    }

    return 0;
}
