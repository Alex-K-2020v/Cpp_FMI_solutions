// bonusTask1_10.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*Военните използват 4-цифрени числа, за да посочат даден момент от време. 
    Например два и половина следобяд се записва като 1430. Напишете програма, която по дадени две числа проверява
    дали са валидни моменти от време и ако да, намира разликата им. 
    Примери: 2500 1430 -> Invalid 1415 1755 -> 0340 (приема се и 340) 2300 0100 -> 0200 (приема се и 200)*/
    cout << "Enter two numbers [a] [b]: ";
    int a, b, diff,half1A,half2A,half1B,half2B;
    diff = 0;
    cin >> a >> b;
    half1A= a /100;
    half2A = ((a / 10) % 10) * 10 + a % 10;
    half1B = b / 100;
    half2B = ((b / 10) % 10) * 10 + b % 10;
    bool isValid = (half1A<24 && half2A<60) && (half1B<24 && half2B<60);

 
    if (isValid)
    {
        int half1, half2;
        half2 = half2B - half2A;
        half1 = half1B - half1A;
        if (half1<0)
        {
            half1 += 24;
        }
        else if(half1>=24)
        {
            half1 -= 24;
        }
        if (half2<0)
        {
            half2 += 60;
            half1--;
        }
        else if (half2>60)
        {
            half2 -= 60;
            half1++;
        }
        if (half2==0)
        {
            cout << half1 << "00" << endl;
            return 0;
        }
        if (half1==0)
        {
            cout << "00" << half2 << endl;
            return 0;
        }
        cout << half1 << half2 << endl;
        return 0;
    }
    cout << "Invalid" << endl;
}


