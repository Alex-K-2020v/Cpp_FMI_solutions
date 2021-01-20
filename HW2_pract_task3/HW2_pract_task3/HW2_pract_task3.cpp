// HW2_pract_task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void decipher(char*, int);
int main()
{
    char str[100];
    cin.getline(str,100);
    int key;
    cin >> key;
    decipher(str, key);
    for (size_t i = 0; str[i]!='\0'; i++)
    {
        cout << str[i];
    }
}
void decipher(char* str, int key)
{
    for (size_t i = 0; str[i]!='\0'; i++)
    {
        *(str + i) -= key;
        if (*(str+i)<65)
        {
            *(str + i) += 26;
        }
    }
}
