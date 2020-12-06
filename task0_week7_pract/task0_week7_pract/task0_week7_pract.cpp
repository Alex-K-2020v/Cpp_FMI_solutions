#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    cout << "Enter a and b: ";
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    cout << a<< " " << b;
}
void swap(int* ptrA, int* ptrB)
{
    *ptrA += *ptrB;
    *ptrB = *ptrA - *ptrB;
    *ptrA = *ptrA - *ptrB;
}

