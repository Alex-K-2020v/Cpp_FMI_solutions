#include <iostream>
using namespace std;
int toBinary(int);

int main()
{
    cout << "Enter N and [N] integers: ";
    size_t n;
    int sum;
    sum = 0;
    int arr[100];
    cin >> n;
    while (n < 1)
    {
        cout << "Enter a valid (bigger than 0) value of N:";
        cin >> n;
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];        
        sum += arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << toBinary(arr[i]) << endl;
    }
    cout << sum << endl << toBinary(sum) << endl << sum / n << endl << toBinary(sum / n) << endl;
}

int toBinary(int number)
{
    int num = 0;
    int binary[32];
    int ctr = 0;
    while (number != 0)
    {
        binary[ctr] = number % 2;
        number /= 2;
        ctr++;
    }
    ctr--;
    while (ctr>=0)
    {
        num += binary[ctr];
        if (ctr!=0)
        {
            num *= 10;
        }   
        ctr --;
    }
    return num;
}

