#include <iostream>
using namespace std;

// Selection Sort Function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Linear Search Function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Binary Search Function (Array should be sorted)
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Function to print the array
void printArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Sort using Selection Sort\n";
        cout << "2. Search using Linear Search\n";
        cout << "3. Search using Binary Search\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                selectionSort(arr, n);
                cout << "Sorted Array: ";
                printArray(arr, n);
                break;
            case 2: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;
                int result = linearSearch(arr, n, key);
                if (result != -1)
                    cout << "Element found at index " << result << endl;
                else
                    cout << "Element not found\n";
                break;
            }
            case 3: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;
                int result = binarySearch(arr, 0, n - 1, key); 
                if (result != -1)
                    cout << "Element found at index " << result << endl;
                else
                    cout << "Element not found\n";
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
