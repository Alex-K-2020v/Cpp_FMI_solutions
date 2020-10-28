// nFactoriel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n,current, mult;
    cout << "Enter n: ";
    cin >> n;
    current = n;
    mult = n;
    if (n==0)
    {
        cout << "The N! of 0 is: 1";
        return 0;
    }
    while (current>1)
    {
        mult = mult * (current - 1);
        
        current-=1;
    }
    cout << "The N! of " << n << " is: " << mult << endl;
}

