// minIMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << "Insert a: ";
    int a, b, c;
    cin >> a;
    cout << "Insert b: ";
    cin >> b;
    cout << "Insert c: ";
    cin >> c;
    int minimum = min (a, b);
    minimum = min(minimum, c);
    int maximum = max(a, b);
    maximum = max(maximum, c);
    cout << "max: " << maximum << endl;
    cout << "min: " << minimum << endl;

}

