// practiceTask2_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n реални числа.
    Да се намерят минималния и максималния елемент на масива.*/
    cout << "Enter n and an array: ";
    int n, min;
    int arr[1000];
    cin >> n;
    min = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i==0)
        {
            min = arr[0];
        }
        else if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << min;
    
    
}
