#include <iostream>
using namespace std;

int main() {

     cout << "--------------------------------------------------------------------\n"; 
    int number,mark, age,year;

    //the user for input
    cout << "Enter an integer: ";
    cin >> number;

    
    string rank = (number % 2 == 0) ? "even" : "odd";

    
    cout << "The number " << number << " is " << rank << "." << endl;


     cout << "--------------------------------------------------------------------\n"; 

    // Prompt the user to enter mark
    cout << "Enter your mark (0 to 100): ";
    cin >> mark;

    string grade = (mark >= 90 && mark <= 100) ? "A" :
                   (mark >= 80 && mark <= 89) ? "B" :
                   (mark >= 70 && mark <= 79) ? "C" :
                   (mark >= 60 && mark <= 69) ? "D" :
                   (mark < 60 && mark >= 0)  ? "F" : "Invalid mark";

    cout << "Your grade is: " << grade << endl;

     cout << "--------------------------------------------------------------------\n"; 

    // Ask the user for age
    cout << "Enter your age: ";
    cin >> age;

    string message = (age >= 18) ? "You are eligible to vote." : "You are not eligible to vote.";

    cout << message << endl;


     cout << "--------------------------------------------------------------------\n"; 
    // Ask the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

   
    string result = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
                    ? "It is a leap year." 
                    : "It is not a leap year.";

    
    cout << result << endl;



    return 0;
}
