#include <iostream>

using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int j = 0; 

   
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to the end: ";
    printArray(arr, n);

    return 0;
}
