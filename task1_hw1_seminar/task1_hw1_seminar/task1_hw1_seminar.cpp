#include <iostream>
#include<string>
using namespace std;
void orderAscending(int*, size_t);
void orderDescending(int*, size_t);

enum orderOfArray{ascending, descending, invalid};
orderOfArray chooseOrderOfArray(string);
int main()
{
    cout << "Enter N and [N] integers: ";
    size_t n;
    int arr[100];
    cin >> n;
    while (n<1)
    {
        cout << "Enter a valid (bigger than 0) value of N:";
        cin >> n;
    }
    enum order
    {
        ascending,
        descending
    };
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getchar();
    cout << "Enter 'ascending' for ascending and 'descending' for descending: ";
    string command;
    getline(cin,command);
    orderOfArray order = chooseOrderOfArray(command);
    while (order==invalid)
    {
        cout << "Enter 'ascending' for ascending and 'descending' for descending: ";
        cin >> command;
        orderOfArray order = chooseOrderOfArray(command);
    }
    if (order==ascending)
    {
        orderAscending(arr, n);
    }
    else if (order==descending)
    {
        orderDescending(arr,n);
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void orderAscending(int* arr, size_t n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}
void orderDescending(int* arr, size_t n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}
orderOfArray chooseOrderOfArray(string strOrder)
{
    if (strOrder=="ascending")
    {
        return orderOfArray::ascending;
    }
    else if (strOrder=="descending")
    {
        return orderOfArray::descending;
    }
    return orderOfArray::invalid;
}




