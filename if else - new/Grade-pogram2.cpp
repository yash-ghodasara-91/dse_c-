#include <iostream>
using namespace std;

main() {
    
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
   
    

    return 0;
}
