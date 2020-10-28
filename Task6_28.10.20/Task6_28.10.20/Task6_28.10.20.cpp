// Task6_28.10.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a and n: ";
    int a, n,pow;
    pow = 1;
    cin >> a;
    cin >> n;
    if (n==0)
    {
        cout << "a^n is: 1"<< endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        pow *= a;
    }
    cout << "a^n is:" << pow << endl;
}

