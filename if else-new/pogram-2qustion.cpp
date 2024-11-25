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



     cout << "--------------------------------------------------------------------\n"; 
    int score;

    cout << "Enter your Mark(0 to 100): ";
    cin >> score;

   if (score < 0 || score > 100)
   {
    cout << "invalid ,Please enter a scoure between 0 and 100" << "\n";
   } else {

    if (score>=90) {
        cout << "your grade is :- A" << "\n";
    }else if (score>=80)
    {
       cout << "your grade is :- B" << "\n";
    } else if (score>=70)
    {
       cout << "your grade is :- C" << "\n";
    } else if (score>=60)
    {
       cout << "your grade is :- D" << "\n";
    } else
    {
        cout << "your grade is :- F" << "\n";
    }
   }



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


      cout << "--------------------------------------------------------------------\n"; 
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
        if (year % 400 == 0) {
            cout << year << " is a leap year.";
        }
        else {
            cout << year << " is not a leap year.";
        }
        }
        else {
        cout << year << " is a leap year.";
        }
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}
