#include <iostream>
using namespace std;

int main()
{
    
// QUS-1 -------------------------------------------------------
    cout << "----------------------------------------------" << endl;
     cout << "Question-1" << endl;
    
    int start = 41; 

    for (int i = 1; i <= 5; ++i) { 
        for (int j = 0; j < i; ++j) { 
            cout << start + j << " "; 
        }
        cout << endl; 
    }


  


// QUS-2 -------------------------------------------------------    
     cout << "----------------------------------------------" << endl;
     cout << "Question-2" << endl;

 int rows = 4;  
    int number = 11;  

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << number << " ";
            ++number;  
        }
        cout << endl;  
    }

   

 
// QUS-3 -------------------------------------------------------  
     cout << "----------------------------------------------" << endl;
     cout << "Question-3" << endl;
int rows1 = 5; 

    for (int i = rows1; i >= 1; --i) { 
        
        for (int j = 1; j <= i; ++j) { 
            cout << (j % 2) << " "; 
        }
        cout << endl; 
    }

  
   

// QUS-4 -------------------------------------------------------  
     cout << "----------------------------------------------" << endl;
     cout << "Question-4" << endl;
int rows2 = 5; 

    for (int i = 1; i <= rows2; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }

        for (int j = rows - i + 1; j <= rows; ++j) {
            cout << j << " ";
        }

        
        for (int j = rows - 1; j >= rows - i + 1; --j) {
            cout << j << " ";
        }

        cout << endl; 
    }

    

// QUS-5 -------------------------------------------------------  
     cout << "----------------------------------------------" << endl;
     cout << "Question-5" << endl;

int n = 5; 
   
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    
    for (int i = n; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl; 
   

// QUS-6 -------------------------------------------------------
     cout << "----------------------------------------------" << endl;
     cout << "Question-6" << endl;


char alphabet = 'A';
    int rows3 = 4; 
   
    for (int i = 1; i <= rows3; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet++; 
    }

// QUS-7 -------------------------------------------------------
     cout << "----------------------------------------------" << endl;
     cout << "Question-7" << endl;



    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;

        
        if (i < rows) { 
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    cout << endl; 

    
    cout << "*\t*\n";

    
    for (int i = 1; i <= 5; i++) {
        cout << "* ";
    }
    cout << endl;

  
    cout << "*\n";
    cout << "*\n";

    return 0;

}