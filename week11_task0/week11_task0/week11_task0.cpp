// week11_task0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int biggestLocal(int*, int, int, int, int);
int main()
{
    cout << "Enter N and [N] numbers: ";
    int arr[100];
    int n;
    cin >> n;
    while (n<1 || n>100)
    {
        cout << "Enter a value between 1 and 100: ";
        cin >> n;
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int biggestLoc = biggestLocal(arr + 1, arr[0], arr[2], 0, n);
    cout << biggestLoc << endl;
}

int biggestLocal(int* arr, int left, int right, int count, int size)
{
    if (size<3)
    {
        return count;
    }
    else if (*arr>left && *arr>right)
    {
        count++;
    }
    left = *arr;
    right = *(arr + 2);
    size--;
    return biggestLocal(arr + 1, left, right, count, size);
}