// exam1_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number: ";
    int n, prev1,prev2;
    cin >> n;
    prev1 = n % 10; //the last digit of the number
    prev2 = (n / 10) % 10; //the second to last digit of the number
    int temp = n/100; //temporary integer so we don`t change the original n
    if (temp == 0 && prev2 == 0)
    {
        cout << "You typed a number below |10|" << endl;
        return 0;
    }
    if (temp == 0)
    {
        cout << "You typed a number below |100|" << endl;
        return 0;
    } 
    bool isValid = true;
    while (temp!=0)
    {
        if (temp%10!=prev1+prev2) //checking if the digit is the sum of the previous two digits
        {
            isValid = false; 
            break;
        }
        prev1 = prev2; // changing the prev1 and prev 2 digits so they match the last two digits of the number
        prev2 = temp % 10; 
        temp /= 10; //dividing the number by 10 to make the next digit visible
        
    }
    if (isValid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

