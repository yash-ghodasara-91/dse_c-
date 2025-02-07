#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter the number to check is prime or not prime: ";
    cin >> n;

    if (n < 2)
    {
        isPrime = false; 
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)  
        {
            if (n % i == 0) 
            {
                isPrime = false;
                break; 
            }
        }
    }

    if (isPrime)
        cout << "The given number is prime";
    else
        cout << "The given number is not prime";

    return 0;
}
