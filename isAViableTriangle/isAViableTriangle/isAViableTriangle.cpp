
#include <iostream>
using namespace std;
int main()
{
    cout << "Insert a: ";
    int a, b, c;
    cin >> a;
    cout << "Insert b: ";
    cin >> b;
    cout << "Insert c: ";
    cin >> c;
    if (a<=0 || b<=0 || c<=0 )
    {
        cout << "takev prezident";
        return 0;
    }
    if (a+b>c && a+c>b && b+c>a )
    {
        cout << "nqq se gramna" << endl;
        return 0;
    }
    cout << "she se gramna" << endl;


}

