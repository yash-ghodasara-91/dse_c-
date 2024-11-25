//W.A.P. to input your age and check it is valid for voting?
#include <iostream>
using namespace std;

int main() {
    
    cout << "--------------------------------------------------------------------\n"; 
    int age;
    cout << "Enter an Age: ";
    cin >> age;


	if(age>18)
	{
		cout << "you are eligible for voting" << "\n";
	}
	else
	{
		cout << "you are not eligible for voting" << "\n";
	}
}
