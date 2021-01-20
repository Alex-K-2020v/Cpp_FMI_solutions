// week8_task3_pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void mergeArrWithPtrs(int*,int*,int*,int,int,int);
int main()
{
    int arr1[4] = { 1,2,3,4 };
    int arr2[5] = { 5,6,7,8,9 };
    int arr3[9];
    mergeArrWithPtrs(arr1,arr2,arr3,4,5,9);
    for (size_t i = 0; i < 9; i++)
    {
        cout << arr3[i]<<" ";
    }
    cout << endl;

}
void mergeArrWithPtrs(int* arr1, int* arr2, int* arr3, int n1, int n2, int n3)
{
    int ctr1 = 0;
    int ctr2 = 0;
    for (size_t i = 0; i < n3; i++)
    {
        if (arr1[ctr1]!=NULL && arr2[ctr2]!=NULL && arr1[ctr1] < arr2[ctr2])
        {
            arr3[i] = arr1[ctr1];
            ctr1++;
        }
        else if (arr1[ctr1] != NULL && arr2[ctr2] != NULL && arr1[ctr1] > arr2[ctr2])
        {
            arr3[i] = arr2[ctr2];
            ctr2++;
        }
        else if (arr1[ctr1] != NULL && arr2[ctr2] != NULL && arr1[ctr1] == arr2[ctr2])
        {
            arr3[i] = arr1[ctr1];
            i++;
            arr3[i] = arr2[ctr2];
            ctr1++;
            ctr2++;
        }
        else if (arr1[ctr1]==NULL && arr2[ctr2]!=NULL)
        {
            for (size_t j = 0; j < n2; j++)
            {
                arr3[i] = arr2[j];
                i++;
            } 
            
        }
        else if (arr1[ctr1]!=NULL && arr2[ctr2]==NULL)
        {
            for (size_t j = 0; j < n1; j++)
            {
                arr3[i] = arr1[j];
                i++;
            }
            
        }
        else if (arr1[ctr1]==NULL && arr2[ctr2]==NULL)
        {
            break;
        }

    }
}
