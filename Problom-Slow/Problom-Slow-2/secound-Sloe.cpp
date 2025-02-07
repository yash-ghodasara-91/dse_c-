#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int N = size + 1; 
    int totalSum = (N * (N + 1)) / 2;
    int arraySum = 0;

    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
