#include <iostream>
#include <string>
using namespace std;
int validateMax(int);
void sumCube(int(*)[20][20], int, int, int);
int det(int, int[20][20]);
void printCube(int[20][20][20], int, int, int);
void printFlat(int[20][20][20], int, int, int);
void cubeTransponse(int(*)[20][20],int(*)[20][20], int, int, int);
int main()
{
	int n, m, k;
	string command;
	int cube[20][20][20];
	cin >> n;
	n = validateMax(n);
	cin >> m;
	m = validateMax(m);
	cin >> k;
	k = validateMax(k);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				cin>> cube[i][j][p];
			}
		}
	}
	cout << "The cubic matrix is saved" << endl;
	getchar();
	while (true)
	{
		cout << "Enter a command: [sum] [super] [hyper] [transponse] [flat] [exit]: ";
		getline(cin, command);
		if (command == "sum")
		{
			sumCube(cube, n, m, k);
			printCube(cube, n, m, k);
		}
		else if (command == "super")
		{
			if (m == k)
			{
				int sumDet = 0;
				for (int i = 0; i < n; i++)
				{
					sumDet += det(m, cube[i]);
				}
				cout << sumDet << endl;
			}
			else
				cout << "undefined" << endl;
		}
		else if (command == "hyper")
		{
			if (m == k)
			{
				int multDet = 1;
				for (int i = 0; i < n; i++)
				{
					multDet *= det(m, cube[i]);
				}
				cout << multDet << endl;
			}
			else
				cout << "undefined" << endl;
		}
		else if (command=="transponse")
		{
			int transponsedCube[20][20][20];
			cubeTransponse(cube,transponsedCube, n, m, k);
			printCube(transponsedCube, n, m, k);
		}
		else if (command=="flat")
		{
			printFlat(cube, n, m, k);
		}
		else if (command=="exit")
		{
			cout << "End of program" << endl;
			return 0;
		}
	}
	

}
int validateMax(int num)
{
	while (num<1)
	{
		cout << "Enter a valid value (above 0):";
		cin >> num;
	}
	return num;
}
void printCube(int cube[20][20][20], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				cout << cube[i][j][p]<< " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
void sumCube(int (*cube)[20][20], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				*(*(*(cube + i) + j) + p) *= 2;
			}
		}
	}

}
int det(int n, int matrix[20][20])
{
	int c, subi, i, j, subj, d;
	d = 0;
	int submat[20][20];
	if (n == 2)
	{
		return((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			subi = 0;
			for (i = 1; i < n; i++)
			{
				subj = 0;
				for (j = 0; j < n; j++)
				{
					if (j == c)
					{
						continue;
					}
					submat[subi][subj] = matrix[i][j];
					subj++;
				}
				subi++;
			}
			d = d + (int)((pow(-1, c) * matrix[0][c] * det(n - 1, submat)));
		}
	}
	return d;
}
void cubeTransponse(int(*cube)[20][20],int(*transponsedCube)[20][20], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				*(*(*(transponsedCube + i) + p) + j) = *(*(*(cube + i) +j) + p);
			}
		}
	}
	for (int i = 0; i < n/2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				*(*(*(transponsedCube + i) + p) + j) += *(*(*(transponsedCube + n-i-1) + p) + j);
				*(*(*(transponsedCube + n - i - 1) + p) + j) = *(*(*(transponsedCube + i) + p) + j) - *(*(*(transponsedCube + n - i - 1) + p) + j);
				*(*(*(transponsedCube + i) + p) + j) = *(*(*(transponsedCube + i) + p) + j) - *(*(*(transponsedCube + n - i - 1) + p) + j);
			}
		}
	}
}
void printFlat(int cube[20][20][20], int n, int m, int k)
{
	int flat[20][20];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			flat[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < k; p++)
			{
				flat[j][p] += cube[i][j][p];
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << flat[i][j]<< " ";
		}
		cout << endl;
	}
}

