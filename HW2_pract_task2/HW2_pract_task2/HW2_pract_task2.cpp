// HW2_pract_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fillArr(int(*)[100], size_t);
int main()
{
    cout << "Enter N: ";
    size_t n;
    cin >> n;
    while (n<1 || n>100)
    {
        cout << "Enter a valid value of N (between 1 and 100): ";
        cin >> n;
    }
    int arr[100][100];
    arr[0][0] = 0;
    fillArr(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void fillArr(int (*arr)[100], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (j<n-i-1)
            {
                *(*(arr + i) + j) = 0;
            }
            else if (j==n-i-1)
            {
                *(*(arr + i) + j) = 1;
            }
            else
            {
                *(*(arr + i) + j) = 2;
            }
        }
    }
}

 