// k1_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive value of money: ";
    double money,tempMoney;
    int counter = 0; // counter starts from 0 because 1 lev is a valid value
    cin >> money;
    while (money<1) //check until the user puts in a valid value 
    {
        cout << "Enter a valid value of money: ";
        cin >> money;
    }
    tempMoney = money;
    while (tempMoney!=1)
    {
        if (int(tempMoney)%2==0) // checking if the value of the money can be divided by 2 
        {
            tempMoney /= 2; //if it can be divided by 2 it is divided by 2
        }
        else
        {
            tempMoney *= 3; // if it can not be divided by 2 we multiply it by 3 and add 1 more
            tempMoney++;
        }
        counter++;
    }
    cout << counter << endl;
}

