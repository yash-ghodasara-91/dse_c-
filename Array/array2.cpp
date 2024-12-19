#include <iostream>
using namespace std;

int main()
{
    // cout << "Q-1 : "<< endl;

    // int n;

    // cout << "Enter the number of elements: ";
    // cin >> n;

    // int arr[n];

    // cout << "Enter  elements: " << endl;
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // cout << "The elements of the array are: " << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;

    // cout << "Q-2 : " << endl;

    // int a[]={10,20,30,40,50};

    // int size=5;

    // int sum=0;

    // for (int i=0; i<size; i++) {
    //     sum=sum+a[i];
    // }
    // cout << "sum of all element in array : " << sum << endl;

    // return 0;

    // cout << "Q-3 : " << endl;

    // int n;
    // cout << "enter the number of element in array : ";
    // cin >> n;

    // int a[n];

    // cout << "eneter the element of array : ";
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }

    // int sum = 0;

    // for (int i = 0; i < n; i++) {
    //     if (i % 2 == 0) {
    //         sum = sum + a[i];
    //     }
    // }

    // cout << "sum of all elements which are present at even indexes : " << sum << endl;


    cout << "Q-4 : " << endl;

    int nums[] = {10,20,5,30,15};
    int size = 5;

    int minval = INT16_MAX;
    int maxval = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        minval = min(nums[i], minval);
        maxval = max(nums[i], maxval);
    }
    cout << "minval : " << minval << endl;
    cout << "maxval : " << maxval << endl;
}
