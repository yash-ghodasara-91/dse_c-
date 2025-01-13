#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> vec(n);

    // Input the vector elements
    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    // Display the original vector
    cout << "\nOriginal Vector: ";
    for (int i = 0; i < n; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Method 1: Manual reverse using a loop
    vector<int> reversedVec(vec.rbegin(), vec.rend());

    // Display the reversed vector
    cout << "Reversed Vector : ";
    for (int i = 0; i < n; ++i) {
        cout << reversedVec[i] << " ";
    }
    cout << endl;

    // // Method 2: Using std::reverse() function
    // reverse(vec.begin(), vec.end());

    // // Display the reversed vector
    // cout << "Reversed Vector (Method 2): ";
    // for (int i = 0; i < n; ++i) {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    return 0;
}
