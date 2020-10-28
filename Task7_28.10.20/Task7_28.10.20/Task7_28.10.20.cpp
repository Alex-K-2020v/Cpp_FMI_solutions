#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    double root = sqrt(n);
    double temp = floor(root);
    bool isPrime = (n == 1) || (n == 2) || (n == 3) || (n == 5) || (n == 7) || 
        (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && root != temp );
    cout << isPrime << endl;

}

