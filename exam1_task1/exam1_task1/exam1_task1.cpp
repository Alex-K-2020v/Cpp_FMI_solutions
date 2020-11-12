// exam1_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter N and [N] numbers: ";
    int n;
    int arr[100];
    bool isInteresting[100];
    cin >> n;
    while (n<1)
    {
        cout << "Enter a valid n: ";
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int temp = arr[i];
        int prev = temp % 10;
        temp /= 10;
        isInteresting[i] = true;
        while (temp!=0)  //checking if the number is interesting right as it is put in the array
        {
            if (temp%10>prev) // if the number is proven not interesting we move to the next number
            {
                isInteresting[i] = false;
                break;
            }
            prev = temp%10;
            temp /= 10;
        }
    }
    for (int i = 0; i < n; i++) // typing out the interesting and the non interesting numbers
    {
        if (isInteresting[i]==true) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

