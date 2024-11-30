#include <iostream>
using namespace std;
int countDigit(int n) {
    if (n/10 == 0)
    return 1;
    return 1 + countDigit(n / 10);
}

main() {

     // Question-1
     cout << "----------------------------------------------" << endl;
     cout << "Question-1" << endl;
    char i;
    i= 'a';

    while (i <= 'z')
    {
        cout << i << ' ';
        i=i+4;

        cout << endl;
    }

    // Question-2
    cout << "----------------------------------------------" << endl;
    cout << "Question-2" << endl;

    int n;
    cout << "Enter the Number:";
    cin >> n;

    cout << countDigit(n) << endl;



    // Question-2
    cout << "----------------------------------------------" << endl;
    cout << "Question-3" << endl;

     int number, first, last;

        cout << "Enter any number: ";
        cin >> number;

        if (number < 0) {
            number = -number;
        }

        last = number % 10;

        while (number >= 10) {
            number /= 10;
        }
        first = number;

        int sum = first + last;

        cout << "The sum of the first and the last digit: " << sum << endl;
    
    cout << "----------------------------------------------" << endl;

    return 0;




    

}