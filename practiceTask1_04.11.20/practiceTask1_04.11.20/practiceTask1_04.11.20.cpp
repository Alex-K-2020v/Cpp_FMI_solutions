// practiceTask1_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*По въведени от стандартния вход две цели числа да се изведе 
    произведението в интервала между тях.
    Вход: 5 10 Изход: 151200*/
    cout << "Enter two integers: ";
    int a, b, mult;
    mult = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        mult *= i;
    }
    cout << mult;
}

