#include <iostream>
using namespace std;

int main()
{
    int *a = new int; 
    int *b = new int;
    int temp;

    cout << "Enter value for a: ";
    cin >> *a;

    cout << "Enter value for b: ";
    cin >> *b;

    cout << "\nBefore swapping." << endl;
    cout << "a = " << *a << ", b = " << *b << endl;

    
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << *a << ", b = " << *b << endl;

    
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;

    return 0;
}