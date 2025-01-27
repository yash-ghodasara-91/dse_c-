#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size); 
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; 
    }

    reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}