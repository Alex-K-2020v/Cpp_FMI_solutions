
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter K and N and then K rows and N columns: ";
    size_t n, k;
    cin >> k >> n;
    int arr[100][100];
    int arrPlus10[100][100];
    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            arrPlus10[i][j] = arr[i][j] + 10;

        }
    }
    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arrPlus10[i][j]<< " ";
        }
        cout << endl;
    }
}

