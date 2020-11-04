// practiceTask5_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*От клавиатурата се въвеждат N числа. Да се изведат в обратен ред.*/
    cout << "Enter n and array: ";
    size_t n;
    cin >> n;
    int arr[256];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[n-i-1]<< " ";
    }
}

