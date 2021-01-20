// HW2_pract_task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int countNumsInStr(char*, int);
int main()
{
    char str[100];
    cin.getline(str, 100);
    int cnt = countNumsInStr(str, 0);
    cout << cnt << endl;
}
int countNumsInStr(char *str, int cnt)
{
    if (*str=='\0')
    {
        return cnt;
    }
    else if (*str >= 48 && *str <= 57)
    {
        cnt++;
    }
    countNumsInStr(str + 1, cnt);
}

