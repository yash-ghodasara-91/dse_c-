#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << 0 << " ";
            } else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }




    int m;

    cout << "Enter the number of rows: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = i; j >= 1; j--) {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }



    int l;

    cout << "Enter the number of rows: ";
    cin >> l;

    int num = 1;

    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    return 0;
}