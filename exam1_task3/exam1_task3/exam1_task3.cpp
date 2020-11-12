#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n and [n] symbols: ";
    int n,sumEven,sumOdd;
    sumEven = 0;
    sumOdd = 0;
    char arr[100];
    cin >> n;
    while (n<1) // checking for a valid n
    {
        cout << "Enter a valid positive number: ";
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0) //finding the even indexes
        { 
            sumEven += int(arr[i]); //adding the value of the arr at the even indexes
        }
        else
        {
            sumOdd += int(arr[i]); // adding the value of the arr at the odd indexes
        }
    }
    int check = sumOdd % sumEven;
    if (sumOdd>=sumEven && sumOdd % sumEven == 0) 
    {// check if the odd sum is bigger than the even and if the odd can be divided by the even
        cout << sumOdd << " / " << sumEven << " = " << sumOdd/sumEven <<endl;
        return 0;
    }
    else if (sumOdd < sumEven && sumEven % sumOdd == 0) 
    {// check if the even sum is bigger than the odd and if the even can be divided by the odd
        cout << sumEven << " / " << sumOdd << " = " << sumEven / sumOdd << endl;
        return 0;
    }
    else if (sumOdd > sumEven && sumOdd % sumEven != 0)
    {// check if the odd sum is bigger than the even and if the odd can`t be divided by the even
        cout << sumOdd << " / " << sumEven << " is invalid. " << endl;
        return 0;
    }
    else if (sumOdd < sumEven && sumEven % sumOdd != 0)
    {// check if the even sum is bigger than the odd and if the even can`t be divided by the odd
        cout << sumEven << " / " << sumOdd << " is invalid. " << endl;
        return 0;
    }

}

