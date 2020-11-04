// practiceTask7_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа. 
    Да се провери дали масивът е симетричен(огледален, палиндром).*/
    cout << "Enter n and an array: ";
    size_t n;
    char arr[256];
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-i-1])
        {
            cout << "Not a palindrom" << endl;
            return 0;
        }
    }
    cout << "It is a palindrom!" << endl;
    return 0;
}



