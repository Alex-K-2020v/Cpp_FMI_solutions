
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n and [n] numbers:  ";
    int n,temp;
    int min = NULL;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if ((min==NULL && temp<0)|| (temp < 0 && temp >= min))
        {
            min = temp;
        }
    }
    if (min==NULL)
    {
        cout << "There are no numbers below 0"<< endl;
        return 0;
    }
    cout << "The biggest number below 0 is: " << min << endl;
}

