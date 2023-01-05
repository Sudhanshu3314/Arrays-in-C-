/* Programmer = Sudhanshu Barnwal
Purpose = Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101
For ex: a[]={5,6,10,4,9}
b[]={1,2,3,4,5}
Output: 5
Explanation: a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int minSumOfBothArray(int arr1[], int arr2[], int size)
{

    int min1 = arr1[0];
    int min2 = arr2[0];

    for (int idx = 0; idx < size; idx++)
    {
        if (arr1[idx] < min1)
        {
            min1 = arr1[idx];
        }
    }
    for (int idx = 0; idx < size; idx++)
    {
        if (arr2[idx] < min2)
        {
            min2 = arr2[idx];
        }
    }

    return min1 + min2;
}

int main()
{
    int size;
    cout << "\n Enter number that how many numbers do you want to type :- ";
    cin >> size;

    int array1[size], array2[size];

    cout << "\n Enter the value in first Array :- ";
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value " << index + 1 << " index :- ";
        cin >> array1[index];
    }
    
    cout << "\n Enter the value in second Array :- ";
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value " << index + 1 << " index :- ";
        cin >> array2[index];
    }

    cout << "\n Sum of minimum of Both array is " << minSumOfBothArray(array1, array2, size) << endl;

    return 0;
}
