// practiceTask0_04.11.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*По въведено число n и намерете сумата на от n до 0;
	Вход: 5 Изход: 1 + 2 + 3 + 4 + 5 = 15*/
    cout << "Enter n: ";
    int n, sum;
    sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i==n)
        {
            cout << i;
            sum += i;
            break;
        }
        cout << i << " + " ;
        sum += i;
    }
    cout << " = " << sum << endl;
}

