#include <iostream>
using namespace std;

int main () {
    // int a [5] = {7,4,9,5,2};

    // int b [5] = {1,3,1,7,3};

    // int c [5];

    // for (int i = 0; i < 5 ; i++){
    //     c [i] = a [i] + b [i];
    //     cout << c [i] << ",";
    // }


    // int n,value;
    // cout << "enter array size : ";
    // cin >> n;

    // for (int i=0; i < n; i++){
    //     cout << "a[" << i <<"] = ";
    //     cin >> value;
    // }
    // cout << "length of array : " << n;


    
    int size;

    cout << "Enter array size:- ";
    cin >> size;

    int arr[size];  

    cout << "Enter array elements: \n";
    for (int i=0; i<size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    double sum=0;
    for (int i=0; i<size; i++) 
    {
        sum += arr[i];
    } 

    double average=sum/size;

    cout << "Average of an Array: " << average << endl;
    
}