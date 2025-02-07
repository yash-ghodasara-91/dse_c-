#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
   

   
    for (int i = 1; i < 5; i++)
    {
        int key = arr[i]; 
        int temp = i - 1;

        
        while (temp >= 0 && arr[temp] > key)
        {
            arr[temp + 1] = arr[temp]; 
            temp = temp - 1;
        }
        arr[temp + 1] = key; 

        
            cout << "Pass " << i << ": ";
            for (int j = 0; j < 5; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }

        // Final sorted array
        cout << "Sorted Array: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

