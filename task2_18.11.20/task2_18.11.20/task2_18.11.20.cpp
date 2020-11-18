
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter k and n and then K rows and N columns: ";
    size_t k, n;
    cin >> k >> n;
    int arr[100][100];
    int sums[100];
    for (size_t i = 0; i < k; i++)
    {
        sums[i] = 0;
    }
    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            sums[i] += arr[i][j];
        }
    }
    for (size_t i = 0; i < k; i++)
    {
        cout << "[" << i << "]: " << sums[i] << endl;
    }
    return 0;
}
