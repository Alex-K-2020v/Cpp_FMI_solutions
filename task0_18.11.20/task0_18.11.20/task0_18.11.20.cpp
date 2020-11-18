
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter N and an array: ";
    size_t n;
    cin >> n;
    int haystack[100];
    for (size_t i = 0; i < n; i++)
    {
        cin >> haystack[i];
    }
    int needle, ctr;
    ctr = 0;
    int indexes[100];
    cin >> needle;
    for (size_t i = 0; i < n; i++)
    {
        if (haystack[i]==needle)
        {
            indexes[ctr] = i;
            ctr++;
                    
        }
    }
    cout << "N is found: " << ctr << " times" << endl ;
    for (size_t i = 0; i < ctr; i++)
    {
        cout << indexes[i]<<endl;
    }
}

