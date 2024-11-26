#include <iostream>
using namespace std;

main() {

         cout << "--------------------------------------------------------------------\n"; 
          cout << "--------------------------------------------------------------------\n"; 

int a,b,c;

cout << "Enter a value of the first number: ";
    cin >> a;
    cout << "Enter a value of the second number: ";
    cin >> b;
    cout << "Enter a value of the third number: ";
    cin >> c;

     (a < b )
        ? ((a < c)?cout << "a is min":cout << "c is min" )
        :((b < c)?cout << "b is min":cout << "c is min" );
}