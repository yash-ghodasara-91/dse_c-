#include <iostream>
using namespace  std;

main () {


 // question-1


 cout << "--------------------------------------------------------------------\n"; 
 cout << "Question-1" << endl;

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

for (int i = 1; i <= 5; i++) {
        
        for (int j = i; j >= 1; j--) {
            cout << j << " "; 
        }
        cout << endl; 
    }



// Question-2


 cout << "--------------------------------------------------------------------\n"; 
 cout << "Question-2" << endl;

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

for (int i = 5; i >= 1; i--) {
        
        for (int j = i; j <= 5; j++) {
            cout << j << " "; 
        }
        cout << endl; 
    }


// Question-3

 cout << "--------------------------------------------------------------------\n"; 
 cout << "Question-3" << endl;

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1


for (int i = 5; i >= 1; i--) {
        
        for (int j = 5; j >= i; j--) {
            cout << i << " "; 
        }
        cout << endl; 
    }

// Question-4

 cout << "--------------------------------------------------------------------\n"; 
 cout << "Question-4" << endl;

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5


 for (int i = 1; i <= 5; i++) {
    for (int j = i; j <=5; j++)
    {
        cout << j << " " ;
    }
    cout << endl;
 }

// Question-5

 cout << "--------------------------------------------------------------------\n"; 
 cout << "Question-5" << endl;

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5


for (int i = 1; i <= 5; i++) {
        
        for (int j = 5; j >= i; j--) {
            cout << i << " "; 
        }
        cout << endl; 
    }

 cout << "--------------------------------------------------------------------\n"; 


    return 0;

 
}