// practiceTask3_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n реални числа. 
    Да се намерят минималния и максималния елемент на масива.
    Да се разменят местата им в масива и да се изведе новия масив.*/
    cout << "Enter n and an array: ";
    int n, min, max;
    n = NULL;
    min = NULL;
    max = NULL;
    double arr[1000] = { NULL };

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i==0)
        {
            min = 0;
            max = 0;
        }
        if (arr[max]<arr[i])
        {
            max = i;
        }
        if (arr[min]>arr[i])
        {
            min = i;
        }
    }
    arr[max] += arr[min];
    arr[min] = arr[max] - arr[min];
    arr[max] = arr[max] - arr[min];
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

