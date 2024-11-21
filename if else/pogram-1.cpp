#include <iostream>
using namespace std;

main () {

    int a,b,c,total,avg;
   
    cout <<"Enter a value of the first number:-";
    cin >> a;

     cout <<"Enter a value of the second number:-";
    cin >>b;

    if (a<b)
    {
        cout << "The maximum value is:" << a << "\n";
    }
    else
    {
        cout << "The minimum  value is:" << b << "\n";
    }


   
    cout <<"Enter a value of the first number:-";
    cin >> a;

    if (0>a)
    {
        cout << "This number is Negative \n";
    }
    else if (0<a)
    {
        cout << "This number is Psitive \n";
    }
    else
    {
        cout << "Number is Neutral";
    }
    
    
  
    cout <<"Enter maths marks:";
    cin >> a;
    cout <<"Enter english marks:";
    cin >>b;
    cout <<"Enter science marks:";
    cin >>c;

    total= a+b+c;
    avg=total*100/300;

    cout << "Total Average mark:" << avg <<"\n"; 

    return 0;
}
