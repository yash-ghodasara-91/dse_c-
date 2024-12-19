#include <iostream>
using namespace std;

main () {
    // cout << "Q-1 : " << endl;

    // int n;
    // cout << "eneter the size of the array : ";
    // cin >> n;

    // int a[n];

    // cout << "enter the element of the array : " << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << "a[" << i << "] = ";
    //     cin >> a[i];
    // }

    // cout << "negative element in the array : " << " ";
    // int negativeelement = false;
    // for (int i = 0; i < n; i++) {
    //     if (a[i] < 0) {
    //         cout << a[i] << " , ";
    //         negativeelement = true;
    //     }
    // }

    // cout << endl;


    // cout << "Q-2 : " << endl;

    // int n,m;
    
    // cout << "enter the array row size : ";
    // cin >> n;
    // cout << "enter the aaray columns size : ";
    // cin >> m;
    
    // int a[n][m];
    // cout << "eneter array element : " << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << "a[" << i << "][" << j << "] = ";
    //         cin >> a[i][j];
    //     }
    // }
    
    // int largest = a[0][0];
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //          if (a[i][j] > largest) {
    //             largest = a[i][j];
    //         }
    //     }
    // }
    
    // cout << "the largest element is : " << largest << endl;


    // cout << "Q-3 : " << endl;

    // int x,y;

    // cout << "eneter the array row size : ";
    // cin >> x;
    // cout << "eneter the array column size : ";
    // cin >> y;

    // int z[x][y];

    // cout << "enetr array element : " << endl; 
    // for (int i = 0; i < x; i++) {
    //     for (int j = 0; j < y; j++) {
    //         cout << "z[" << i << "][" << j << "] = ";
    //         cin >> z[i][j]; 
    //     }
    // }

    // int transpose [x][y];
    // for (int i = 0; i < x; i++) {
    //     for (int j = 0; j < y; j++) {
    //         transpose[j][i] = z[i][j];
    //     }
    // }

    // cout << "the transpose matrix of an array : " << endl;
    // for (int i = 0; i < x; i++) {
    //     for (int j = 0; j < y; j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    cout << "Q-4 : " << endl;

    int rows;
    int cols;
    
    cout << "eneter the array row size : ";
    cin >> rows;
    cout << "eneter the array columns size : ";
    cin >> cols;
    
    int a[rows][cols];
    
    cout << "enter array elements : " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    
    cout << "sum of element in row : " << endl;
    for (int i = 0; i < rows; i++) {
        int rowsum = 0;
        for (int j = 0; j < cols; j++) {
            rowsum += a[i][j];
        }
        cout << "row " << i + 1 << " sum : " << rowsum << endl;
    }
    
    cout << "sum of element in column : " << endl;
    for (int j = 0; j < cols; j++) {
        int colssum = 0;
        for (int i = 0; i < rows; i++) {
            colssum += a[i][j];
        }
        cout << "columns " << j + 1 << " sum : " << colssum << endl;
    }
}