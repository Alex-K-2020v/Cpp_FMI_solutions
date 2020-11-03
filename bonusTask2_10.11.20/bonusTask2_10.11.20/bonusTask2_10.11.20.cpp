// bonusTask2_10.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    /*Напишете програма, която по дадени две естествени числа проверява
    дали има делител на първото, чийто квадрат дели и второто число.
    Примери: 6 14 -> No, 6 28 -> Yes.*/
    cout << "Enter a and b: ";
    int a, b;
    cin >> a >> b;
    bool isValid = (a % 2 == 0.0 && b % 4 == 0) || (a % 3 == 0 && b % 9 == 0) || 
        (a % 5 == 0 && b % 25 == 0) || (a % 7 == 0 && b % 49 == 0) ||
        (b % (a*a) == 0);
    double rootA = sqrt(a);

    if (rootA*rootA==a)
    {
        double dB = double(b);
        double check = dB / (rootA*rootA);
        if (floor(check)==check)
        {
            isValid = true;
        }
    }
    if (isValid)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    
}

