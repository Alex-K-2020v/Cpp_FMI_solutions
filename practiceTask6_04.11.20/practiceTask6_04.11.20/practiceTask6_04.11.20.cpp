// practiceTask6_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Да се напише програма, която въвежда от клавиатурата низ и символ.
    Да се изведе колко пъти се среща символът в низа и , ако се среща да го замести със символа *.  
    */
    cout << "Enter a symbol and an array: ";
    char arr[256];
    char symbol;
    int counter = 0;
    size_t n=5;
    int len= NULL;
    cin >> symbol;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i]==symbol)
        {
            arr[i] = '*';
            counter++;
        }
    }
    cout << counter << "| ";
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
}

