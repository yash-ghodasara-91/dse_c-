#include <iostream>

using namespace std;

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2]; 

    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    cout << "Merged Sorted Array: ";
    printArray(merged, n1 + n2);

    return 0;
}
