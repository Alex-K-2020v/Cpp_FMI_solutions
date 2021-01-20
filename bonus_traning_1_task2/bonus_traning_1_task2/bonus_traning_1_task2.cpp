// bonus_traning_1_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* createArr(int size);
void printArr(int*, int);
void swap(int*, int);
int main()
{
	int size;
	cin >> size;
	int* arr = createArr(size);
	swap(arr, size);
	printArr(arr, size);
	delete[] arr;

}
int* createArr(int size)
{
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{//input arr
		cin >> arr[i];
	}
	return arr;
}
void printArr(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void swap(int* arr, int size)
{
	for (size_t i = 0; i < size/2; i++)
	{
		if (arr[i] > arr[size-1-i])
		{
			int temp = arr[i];
			arr[i] = arr[size - 1 - i];
			arr[size - 1 - i] = temp;
		}
	}
}