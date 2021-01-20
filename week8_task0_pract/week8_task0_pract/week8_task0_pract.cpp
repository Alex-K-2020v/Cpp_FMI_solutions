// week8_task0_pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swapWithPointers(int&, int&);
int main()
{
	int a, b;
	a = 5;
	b = 9;
	swapWithPointers(a, b);
	cout << a << " " << b;
}

void swapWithPointers(int &a, int &b)
{
	a += b;
	b = a - b;
	a = a - b;
}
