
#include <iostream>
using namespace std;
void reverse(int*, int);
int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    reverse(a, 5);
	for (size_t i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void reverse(int* arr, int n)
{
	for (size_t i = 0; i <n/2; i++)
	{
		*(arr + i) += *(arr + n - i -1);
		*(arr + n - i - 1) = *(arr + i) - *(arr + n - i - 1);
		*(arr + i) = *(arr + i) - *(arr + n - i - 1);
	}

}

