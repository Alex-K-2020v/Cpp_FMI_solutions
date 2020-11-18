
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter K and N and after that a KxN matrix: ";
    size_t n;
    size_t k;
    cin >> k;
    cin >> n;
    int min, max;
    min = 0;
    max = 0;
    int arr[100][100];
    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i==0 || j==0)
            {
                min = arr[i][j];
                max = arr[i][j];
            }
            else if (arr[i][j]>max)
            {
                max = arr[i][j];
            }
            else if (arr[i][j]<min)
            {
                min = arr[i][j];
            }

        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

}