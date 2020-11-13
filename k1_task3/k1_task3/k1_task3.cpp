// k1_task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n and [n] integers: ";
    size_t n;
    int arr[100];
    cin >> n;
    while (n<1) //checking until the user puts in a valid value of n
    {
        cout << "Enter a valid value of n: ";
        cin >> n;
    }
    for (size_t i = 0; i < n; i++)  
    {// filling in the array while at the same time checking if the values in the array are getting bigger
        cin >> arr[i];
        if (i>=1 && arr[i]<arr[i-1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    double sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        int check = arr[i];
        bool isAValidNumber;
        if (check/10!=0)      //checking if the current integer is a 1 digit number and if it is then it is a valid variable
        {
            while (check/10!=0)
            {
                check /= 10;          // getting the value of the first digit of the number
            }
            isAValidNumber = (arr[i]%10==check);
            //checking if the first and last digit are equal
            if (isAValidNumber!=true) 
            {// if they are not equal the program is stopped
                cout << "No";
                return 0;
            }
        }
        sum += arr[i];
        // if the variable is valid it is added it to the sum
    }
    cout << "Yes" << endl << sum / n << endl;
}
