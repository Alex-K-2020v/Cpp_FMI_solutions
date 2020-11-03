// bonusTask5_10.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Нека имаме редица от естествени числа, в която всяко число присъства толкова пъти колкото самото то, 
    тоест редицата 1 2 2 3 3 3 4 4 4 4 и тка нататъка. По подадено число N изкарайте първите N члена на редицата.*/
    cout << "Enter n: ";
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
    }
}

