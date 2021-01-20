// bonus_traning_1_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char* concat(char*, char*, int, int);
int main()
{
    const int length1 = 5;
    const int length2 = 8;
    char* str1 = new char[length1] {'P', 'e', 's', 'h', 'o'};
    char* str2 = new char[length2] {' ', 'i', 's', ' ', 'c', 'o', 'o', 'l'};
    char* str3 = concat(str1, str2, length1, length2);
    for (size_t i = 0; i < length1+length2; i++)
    {
        cout << str3[i];
    }
    delete[] str1;
    delete[] str2;
    delete[] str3;
}
char* concat(char* str1, char* str2, int str1Len, int str2Len)
{
    char* str3 = new char[str1Len + str2Len];
    int cnt = 0;
    for (size_t i = 0; i < str1Len; i++)
    {
        str3[i] = str1[i];
    }
    for (size_t i = 0, j=str1Len; i < str2Len; i++,j++)
    {
        str3[j] = str2[i];
    }
    return str3;
}

