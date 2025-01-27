#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; 
  cout << "Enter a value: ";
  cin >> *ptr; 
  cout << "Value of variable: " << *ptr << endl;
  cout << "Address of variable: " << ptr << endl;

    delete ptr; 
    ptr = nullptr;

    return 0;
}