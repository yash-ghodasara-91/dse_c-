#include <iostream>
using namespace std;

int main (){

    int arr [] = { 12,11,13,5,6};

    for (int i = 1; i < 5; i++) {
        int temp = i-1;
          int key = arr[i]; 

        while (temp >= 0 && arr[temp] > key) {

            arr[temp+1] = arr[temp];

          
            temp--;
        }
        arr[temp+1] = key;
    }
        for (int i = 0; i < 5; i++){

            cout << arr[i]  << " ";
        }
        cout << endl;

    return 0;
}
