#include<iostream>
using namespace std;
int cube(int a)
{
    return a * a * a;
}
int multi(int a)
{
    cout<<"Enter number:";
    cin >> a;
    if (a%3==0 && a%5==0)
        cout << a << " " << "is divisible by 3 & 5 both";
    else
        cout << a << " " << "is not divisible by 3 & 5";
}
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }    
    return sum;
}
main()
{
    int i, j;
    cout << "Enter Number:";
    cin >> i;
    int result=cube(i);
    cout << "cube is " << " " << result << "\n\n";
    multi(i);
    cout << "\n\nEnter the number of elements in the array: "<< " ";
    cin >> j;
    int arr[j];
    cout << "\n\nEnter " << j << " elements: ";
    for (int i = 0; i < j; i++) {
        cin >> arr[i];
    }
    int result2 = sumArray(arr, j);
    cout << "\n\nThe sum of the array elements is: " << result2 << endl;
}