#include <iostream>
using namespace std;
int main()
{
    /*Дадено е едно число. Проверете дали има 1 в цифрите му.*/
    cout << "Enter a number: ";
    int n,temp;
    cin >> n;
    temp = n;
    while (temp!=0)
    {
        if (temp%10==1)
        {
            cout << "YES";
            return 0;
        }
        temp /= 10;
    }
    cout << "NO";

}


