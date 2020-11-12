// task2_hw1_pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter N: ";
	int n,temp;
	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << "-> 0";
		return 0;
	}
	temp = n;
	bool isNRoot=true;
	while (temp!=1)
	{
		if (temp%2!=0)
		{
			isNRoot = false;
			break;
		}
		temp /= 2;
	}
	if (isNRoot)
	{
		bool isRootOf3 = false;
		int rootOf3Plus, rootOf3Minus;
		temp = n;
		int toAdd = 1;
		while (!isRootOf3)
		{
			isRootOf3 = true;
			while (temp!=1)
			{
				if (temp%3!=0)
				{
					isRootOf3 = false;
					break;
				}
				temp /= 3;
			}
			temp = n + toAdd;
			toAdd++;
		}
		isRootOf3 = false;
		rootOf3Plus = temp-1;
		temp = n;
		int toSubtract = 1;
		while (!isRootOf3)
		{
			isRootOf3 = true;
			while (temp != 1)
			{
				if (temp % 3 != 0)
				{
					isRootOf3 = false;
					break;
				}
				temp /= 3;
			}
			temp = n - toSubtract;
			toSubtract++;
		}
		rootOf3Minus = temp + 1;
		temp = 3;
		if (n-rootOf3Minus<rootOf3Plus-n)
		{
			int ctr;
			for (ctr = 0; temp <=rootOf3Minus ; ctr++)
			{
				temp *= 3;
			}
			cout <<"->"<< ctr;
		}
		else if (n - rootOf3Minus > rootOf3Plus - n)
		{
			int ctr;
			for (ctr = 0; temp <= rootOf3Plus; ctr++)
			{
				temp *= 3;
			}
			cout << "->" << ctr;
		}
		else
		{
			int ctr;
			for (ctr = 0; temp <= rootOf3Minus; ctr++)
			{
				temp *= 3;
			}
			cout << "->" << ctr;
			temp = 3;
			for (ctr = 0; temp <= rootOf3Plus; ctr++)
			{
				temp *= 3;
			}
			cout << "->" << temp;
		}
	}
	else
	{
		bool isRootOf5 = false;
		int rootOf5Plus, rootOf5Minus;
		temp = n;
		int toAdd = 1;
		while (!isRootOf5)
		{
			isRootOf5 = true;
			
			while (temp != 1)
			{
				if (temp % 5 != 0)
				{
					isRootOf5 = false;
					break;
				}
				temp /= 5;
			}
			temp = n + toAdd;
			toAdd++;
		}
		isRootOf5 = false;
		rootOf5Plus = temp-1;
		temp = n;
		int toSubtract = 1;
		while (!isRootOf5)
		{
			isRootOf5 = true;
			while (temp != 1)
			{
				if (temp % 5 != 0)
				{
					isRootOf5 = false;
					break;
				}
				temp /= 5;
			}
			temp = n- toSubtract;
			toSubtract++;
		}
		rootOf5Minus = temp + 1;;
		temp = 5;
		if (n - rootOf5Minus < rootOf5Plus - n)
		{
			int ctr;
			for (ctr = 0; temp <= rootOf5Minus; ctr++)
			{
				temp *= 5;
			}
			cout << "->" << ctr;
		}
		else if (n - rootOf5Minus > rootOf5Plus - n)
		{
			int ctr;
			for (ctr = 0; temp <= rootOf5Plus; ctr++)
			{
				temp *= 5;
			}
			cout << "->" << ctr;
		}
		else
		{
			int ctr;
			for (ctr = 0; temp <= rootOf5Plus; ctr++)
			{
				temp *= 5;
			}
			cout << "->" << ctr;
			if (rootOf5Plus==rootOf5Minus)
			{
				return 0;
			}
			temp = 5;
			for (ctr = 0; temp <= rootOf5Minus; ctr++)
			{
				temp *= 5;
			}
			
			cout << ", " << ctr;
		}
	}
}

