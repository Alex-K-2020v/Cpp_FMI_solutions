// week11_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
int NOD(int&, int&);
int main()
{
    std::cout << "Enter n and m: ";
	int n, m;
	cin >> n >> m;
	cout << NOD(n, m) << endl;
}

int NOD(int &n, int &m)
{
	static int nod = 1;
	if (m == 0)
	{
		return n;
	}
	if (m==1 && n==1)
	{
		return 1;
	}
	if (n > m)
	{
		nod = n % m;
		return NOD(m, nod);
	}
	else
	{
		nod = m % n;
		return NOD(n, nod);
	}




}