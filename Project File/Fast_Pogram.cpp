#include <iostream>
using namespace std;

main() {
    
    cout << "--------------------------------------------------------------------\n"; 
    int score;
    char grade;
    string comment;


    cout << "Enter your Mark(0 to 100): ";
        cin >> score;

     // Validate score
    if (score < 0 || score > 100) {
        cout << "Invalid Number! Please enter a value between 0 to 100." << endl;
        return 1;
    }

    // Calculate grade using a ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';


    // switch-case for comments
    switch (grade) {
    case 'A':
        comment = "Excellent work!";
        break;
    
    case 'B':
        comment = "Great job!";
        break;

    case 'C':
        comment = "Good effort!";
        break;

    case 'D':
        comment = "You passed, but there's room for improvement.";
        break;

    case 'F':
        comment = "Sorry, you failed.";
        break;
    
    default:
        comment = "Invalid grade!";
        break;
    }

     cout << "Your grade: " << grade << endl;
    cout << "Comment: " << comment << endl;

    // Check eligibility for the next level using if-else
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else if (grade == 'F') {
        cout << "Please try again next time." << endl;
    }

    cout << "--------------------------------------------------------------------\n"; 

    return 0;

}