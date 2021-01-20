// week8_task2_pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* findTheNeedle(int*, int , int);
int main()
{
	int haystack[6] = { 1,2,3,4,5,5 };
	int* needlePtr = findTheNeedle(haystack,5,6);
	cout << &(haystack[4]) << endl;
	cout << needlePtr<<endl;
	cout << &(haystack[5]);
}
int* findTheNeedle(int *haystack, int needle, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (haystack[i]==needle)
		{
			return &haystack[i];
		}
	}
	return nullptr;
}

