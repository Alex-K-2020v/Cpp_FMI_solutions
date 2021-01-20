// HW2_seminar_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
bool isPalindromeRec(char*, int, int, bool);
bool isPalindromeIter(char*, int);
int main()
{
    
    const int MAX_ARR_LENGTH = 100;
    cout << "Enter a string (up to 100 characters): ";
    char* str = new char[MAX_ARR_LENGTH];
    cin.getline(str, 100);
    size_t n = 0;
    for (size_t i = 0; str[i]!='\0'; i++)
    {// getting the length of the arr
        n++;
    }
    bool isAPalindromeRecursive = isPalindromeRec(str, n, 0, true);

    bool isAPalindromeIter = isPalindromeIter(str, n);
    if (isAPalindromeRecursive==true)
    {
        cout << "Yes it is a palindrome (recursive)" << endl;
    }
    else
    {
        cout << "No it is not a palindrome (recursive)" << endl;
    }
    
    
    if (isAPalindromeIter == true)
    {
        cout << "Yes it is a palindrome (iterative)" << endl;
    }
    else
    {
        cout << "No it is not a palindrome (iterative)" << endl;
    }

    delete[] str;
}
bool isPalindromeRec(char* str, int n, int cnt, bool isTrue)
{
    if ( (2 * cnt == n && n % 2 == 0) || (2 * cnt == n - 1 && n % 2 == 1 ) )
    {
        return isTrue;
    }
    else
    {
        if (str[cnt] != str[n - cnt - 1])
        {
            return false;
        }
        else
        {
            return isPalindromeRec(str, n, cnt + 1, isTrue);
        }
    }
}
bool isPalindromeIter(char* str, int n)
{
    for (size_t i = 0; i < n/2; i++)
    {
        if (str[i]!=str[n-1-i])
        {
            return false;
        }
    }
    return true;
}

