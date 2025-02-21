#include <iostream>
using namespace std;

// Node structure for Linked List
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() { head = NULL; }
    void insert(int value);
    void display();
};

void LinkedList::insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Merge Sort Implementation
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort Implementation
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Binary Search Implementation
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    LinkedList list;
    int choice, value, arr[10], size, key, result;
    do {
        cout << "\nMenu:\n1. Insert into Linked List\n2. Display Linked List\n3. Merge Sort\n4. Quick Sort\n5. Binary Search\n6. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            list.insert(value);
            break;
        case 2:
            list.display();
            break;
        case 3:
            cout << "Enter size of array: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; i++)
                cin >> arr[i];
            mergeSort(arr, 0, size - 1);
            cout << "Sorted Array: ";
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        case 4:
            cout << "Enter size of array: ";
            cin >> size;
            cout << "Enter elements: ";
            for (int i = 0; i < size; i++)
                cin >> arr[i];
            quickSort(arr, 0, size - 1);
            cout << "Sorted Array: ";
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        case 5:
            cout << "Enter value to search: ";
            cin >> key;
            result = binarySearch(arr, 0, size - 1, key);
            if (result != -1)
                cout << "Element found at index " << result << endl;
            else
                cout << "Element not found" << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);
    return 0;
}
