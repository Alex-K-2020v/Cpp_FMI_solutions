#include <iostream>
using namespace std;
int main()
{
    cout << "Enter numbers: ";
    int current, sum;
    sum = 0;
    cin >> current;
    while (current!=0)
    {
        sum += current;
        cin >> current;
    }
    cout << "The sum is: " << sum << endl;
}

