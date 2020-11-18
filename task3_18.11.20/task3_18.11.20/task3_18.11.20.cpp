// task3_18.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter N and then N rows and N columns: ";
    size_t n;
    cin >>n;
    int arr[100][100];
    int sumDLeftToRight, sumDRightToLeft;
    sumDLeftToRight = 0;
    sumDRightToLeft = 0;
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i==j)
            {
                sumDLeftToRight += arr[i][j];
            }
            
            if (j == n - i - 1)
            {
                sumDRightToLeft += arr[i][j];
            }
            
        }
    }
    cout <<"Sum of left to right diagonal: "<< sumDLeftToRight<<endl;
    cout << "Sum of right to left diagonal: " << sumDRightToLeft << endl;
}


