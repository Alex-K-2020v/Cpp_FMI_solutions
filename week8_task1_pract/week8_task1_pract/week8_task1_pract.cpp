// week8_task1_pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void reverseArrWithPtrs(int[],int);
int main()
{
    int arr[5] = { 1,2,3,4,5 };
	reverseArrWithPtrs(arr,5);
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void reverseArrWithPtrs(int arr[], int n)
{
	for (int i = 0; i < n/2; i++)
	{
		arr[i] += arr[n - i - 1];
		arr[n - i - 1] = arr[i] - arr[n - i - 1];
		arr[i] = arr[i] - arr[n - i - 1];
	}
}
