#include <iostream>
#include <vector>

using namespace std;

// Function to display the vector
void displayVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "The vector is empty.\n";
    } else {
        cout << "Vector elements: ";
        for (int i = 0; i < vec.size(); ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> vec;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Create (Insert Element)\n";
        cout << "2. Read (Display Elements)\n";
        cout << "3. Update (Modify an Element)\n";
        cout << "4. Delete (Remove an Element)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Create (Insert Element)
                int element;
                cout << "Enter element to insert: ";
                cin >> element;
                vec.push_back(element);
                cout << "Element inserted.\n";
                break;
            }
            case 2:
                // Read (Display Elements)
                displayVector(vec);
                break;
            case 3: {
                // Update (Modify an Element)
                int index, newValue;
                cout << "Enter index to update: ";
                cin >> index;
                if (index >= 0 && index < vec.size()) {
                    cout << "Enter new value: ";
                    cin >> newValue;
                    vec[index] = newValue;
                    cout << "Element updated.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                break;
            }
            case 4: {
                // Delete (Remove an Element)
                int index;
                cout << "Enter index to delete: ";
                cin >> index;
                if (index >= 0 && index < vec.size()) {
                    vec.erase(vec.begin() + index);
                    cout << "Element deleted.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                break;
            }
            case 5:
                // Exit
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
