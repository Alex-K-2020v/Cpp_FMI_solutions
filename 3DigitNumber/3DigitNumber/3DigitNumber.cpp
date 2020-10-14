// 3DigitNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Insert a three digit number:";
    int digit;
    std::cin >> digit;
    int arr[3];
    int temp = digit;
    for (int i = 0; i < 3; i++)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
    }
    std::cout << "first digit:" << arr[2] << "\n";
    std::cout << "second digit:" << arr[1] << "\n";
    std::cout << "third digit:" << arr[0] << "\n";
    int sum = arr[0] + arr[1] + arr[2];
    std::cout << "sum:" << sum << "\n";
}
