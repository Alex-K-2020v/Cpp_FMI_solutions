
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int n, sum, temp;
    cin >> n;
    temp = abs(n);
    sum = 0;
    while (temp>0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "The sum is: " << sum << endl;
}

