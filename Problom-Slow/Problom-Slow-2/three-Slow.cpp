#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int K) {
    K = K % size; 
    if (K == 0) return; 


    reverseArray(arr, 0, size - 1);
  
    reverseArray(arr, 0, K - 1);

    reverseArray(arr, K, size - 1);
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    rotateArray(arr, size, K);

    cout << "Rotated array: ";
    printArray(arr, size);

    return 0;
}
