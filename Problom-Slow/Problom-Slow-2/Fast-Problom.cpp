#include <iostream>

using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return -1;
    }

    
    int first = arr[0], second = arr[0];

  
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] < first) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No second largest element found (all elements may be the same)." << endl;
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    
    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
