#include <iostream>
using namespace std;

main() {
   
    cout << "--------------------------------------------------------------------\n"; 
    cout << "question = 1"<< endl;
    int a = 1;

    while (a<=10)
    {
        cout << a << endl;
        a++;
    }

    //question = 2
     cout << "--------------------------------------------------------------------\n"; 
     cout << "question = 2" << endl;
    int b = 10;
    while (b >= 1)
    {
        cout << b << endl;
        b--;
    }
    
   //question = 3

    cout << "--------------------------------------------------------------------\n"; 
    cout << "question = 3" << endl;

      int n, i = 1;

    cout << "Enter any number: ";
    cin >> n;

    cout << "Output:" << endl;
    while (i <= n) {
        cout << i << endl;
        i++;
    }

    //question = 4

    cout << "--------------------------------------------------------------------\n"; 
    cout << "question = 4" << endl;

    cout << "Enter any number: ";
    cin >> n;

    cout << "Output:" << endl;
    while (n >= 1) {
        cout << n << endl;
        n -= 2; 
    }

    //question = 5

     cout << "--------------------------------------------------------------------\n"; 
    cout << "question = 5" << endl;

    int start, end;

    // Input from the user
    cout << "Enter the first Year: ";
    cin >> start;
    cout << "Enter the Endyear: ";
    cin >> end;

    cout << "Output:" << endl;
 
    while (start <= end) {
        cout << start << endl;
        start += 4; 
        
            // cout << endl;
       
    }
    
    cout << "--------------------------------------------------------------------\n"; 
return 0;

}