
#include <iostream>
using namespace std;
int main()
{
    int n, i,temp,ctr;
    cout << "Enter [i] and [n]: ";
    cin >> i;
    cin >> n;
    temp = i;
    ctr = 1;
    while (ctr<=n)
    {
        cout <<"["<<ctr<<"]: "<< temp * temp + 3 * temp<< endl;
        temp ++;
        ctr++;
    }

}
