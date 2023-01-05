/* Programmer = Sudhanshu Barnwal
Purpose = Given an integer array and its size, reverse the array and print it . Here 1 < size < 101

For e.g. : arr[]={1,2,3,4,5} n=5
Output: 5,4,3,2,1
e.g. arr[]={1,1,1,1,1] n=5
Output: 1,1,1,1,1

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[], int size)
{
    cout << "\n ----> Reversed array is { ";
    for (int idx = 0; idx < size; idx++)
    {
        if ( idx != size - 1 )
            cout << arr[size - idx - 1] << " , ";
        else if( idx == size - 1 ) // last element of array is equal to the last index of an array 
            cout << arr[size - idx - 1] << " } \n ";
    }
    return;
}

int main()
{

    int size;
    cout << "\n Enter that how many numbers do you want to type :- ";
    cin >> size;

    int array[size];
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the number in " << index << " index :- ";
        cin >> array[index];
    }

    revArray(array, size);

    return 0;
}