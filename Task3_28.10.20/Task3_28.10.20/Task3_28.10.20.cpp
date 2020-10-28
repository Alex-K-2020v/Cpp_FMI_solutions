
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Enter n: ";
    int n,current,previous;
    current = 0;
    previous = 1;
    cin >> n;
    while (n<0)
    {
        cout << "Please enter a valid number: ";
        cin >> n;
    }
    for(int i = 0; i < n; i++)
    {
        current += previous;
        previous = current - previous;
    }
    cout << "The n`th fibonacci is: " << current;

}
