#include <iostream>
using namespace std;

main () { 
    // cout << "Q-1 : " << endl;

    // int r, c;
    
    // cout << "Enter number of rows: ";
    // cin >> r;
    // cout << "Enter number of columns: ";
    // cin >> c;
    
    // int a[r][c];
    
    // cout << "Enter the elements of the matrix:" << endl;
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cin >> a[i][j];
    //     }
    // }
    
    // int sum = 0;
    
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         sum += a[i][j];
    //     }
    // }
    
    // cout << "Sum of all elements in the matrix is: " << sum << endl;


    // cout << "Q-2 : " << endl;
    
    // int d, e;
    
    // cout << "Enter number of rows: ";
    // cin >> d;
    // cout << "Enter number of columns: ";
    // cin >> e;
    
    // int b[d][e];
    
    // cout << "Enter the elements of the matrix:" << endl;
    // for (int i = 0; i < d; i++) {
    //     for (int j = 0; j < e; j++) {
    //         cin >> b[i][j];
    //     }
    // }
    
    // int sum = 0;
    
    // for (int i = 0; i < d; i++) {
    //     for (int j = 0; j < e; j++) {
    //         if (i % 2 == 0 && j % 2 == 0) {
    //             sum += b[i][j];
    //         }
    //     }
    // }
    
    // cout << "sum of even index elements is: " << sum << endl;


    // cout << "Q-3 : " << endl;

    // int rows, cols;

    // cout << "Enter number of rows: ";
    // cin >> rows;
    // cout << "Enter number of columns: ";
    // cin >> cols;

    // int matrix[rows][cols];

    // cout << "Enter the elements of the matrix:" << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // int sum = 0;

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         if (i % 2 != 0 || j % 2 != 0) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // }

    // cout << "sum of odd index elements in matrix is: " << sum << endl;


    // cout << "Q-4 : " << endl;

    // int rows, cols;
    // cout << "Enter number of rows: ";
    // cin >> rows;
    // cout << "Enter number of columns: ";
    // cin >> cols;

    // int matrix[rows][cols];

    // cout << "Enter elements of the matrix: " << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // int sum = 0;
    // for (int i = 0; i < rows; i++) {
    //     sum += matrix[i][0];
    // }

    // cout << "Sum of left elements : " << sum << endl;


    // cout << "Q-5 : " << endl;

    // int rows, cols;
    // cout << "Enter number of rows: ";
    // cin >> rows;
    // cout << "Enter number of columns: ";
    // cin >> cols;

    // int matrix[rows][cols];

    // cout << "Enter elements of the matrix : " << endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // int sum = 0;
    // for (int i = 0; i < rows; i++) {
    //     sum += matrix[i][2];  
    // }

    // cout << "Sum of right elements : " << sum << endl;


    cout << "Q-6 : " << endl;

    int matrix[3][3]= 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n=3; 
    int primaryDiagonalSum=0;
    int secondaryDiagonalSum=0;

    for (int i=0; i<n; i++) 
    {
        primaryDiagonalSum+=matrix[i][i];  
        secondaryDiagonalSum+=matrix[i][n-1-i];  
    }

    int totalSum=primaryDiagonalSum+secondaryDiagonalSum;
    if (n%2!=0) 
    {
        totalSum-=matrix[n/2][n/2];  
    }

    cout << "Sum of both diagonals:- " << totalSum << endl;

}