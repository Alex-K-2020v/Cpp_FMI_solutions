// practiceTask4_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа. Да се намерят и изведат: 
    първият неотрицателен елемент на масива и сумата на елементите след него. Ако няма такива да се изведе подходящо съобщение.*/
    cout << "Enter n and an array: ";
    int n, sum, index;
    n = NULL;
    index = NULL;
    sum = 0;
    int arr[1000] = { NULL };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            index = i;
            break;
        }
    }
    if (index==NULL)
    {
        cout << "There isn`t a number above 0." << endl;
        return 0;
    }
    cout << arr[index]<< "| ";
    for (int i = index; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}
