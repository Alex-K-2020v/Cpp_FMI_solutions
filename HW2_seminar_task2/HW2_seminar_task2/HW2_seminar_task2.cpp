// HW2_seminar_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void mergeSort(int [], int, int);
void merge(int [], int, int, int);
void printArray(int [], int);
void swap(int*, int*);
int partition(int [], int , int);
void quickSort(int [], int, int);

int main()
{
    int arr1[] = { 26, 16, 38, 7, 2, 14 };
    int arr2[] = { 41, 23, 12, 19, 20, 15 };

    cout << "Given arrays are: " << endl;
    printArray(arr1, 6);

    printArray(arr2, 6);

    mergeSort(arr1, 0, 6 - 1);
    quickSort(arr2, 0, 6-1 );
    cout << "Sorted array with Merge Sort is: " << endl;
    printArray(arr1, 6);
    cout << "Sorted array with Quick Sort is: " << endl;
    printArray(arr2, 6);

    return 0;
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* LeftSubArr = new int[n1];
    int* RightSubArr = new int[n2];

    for (int i = 0; i < n1; i++)
        LeftSubArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        RightSubArr[j] = arr[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (LeftSubArr[i] <= RightSubArr[j]) {
            arr[k] = LeftSubArr[i];
            i++;
        }
        else {
            arr[k] = RightSubArr[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = LeftSubArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = RightSubArr[j];
        j++;
        k++;
    }
    delete[] LeftSubArr;
    delete[] RightSubArr;
}

void mergeSort(int arr[], int l, int r) 
{
    if (l >= r) 
    {
        return;
    }
    int m = (l + r - 1) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   
    int i = (low - 1);   

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;  
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}