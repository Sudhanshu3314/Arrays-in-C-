/* Programmer = Sudhanshu Barnwal
Purpose = Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int sumOfMaxMin(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    for (int idx = 0; idx < size; idx++)
    {
        if (arr[idx] > max)
        {
            max = arr[idx];
        }
        if (arr[idx] < min)
        {
            min = arr[idx];
        }
    }
    cout << "\n ----> Maximum number is " << max << " and Minimum number is " << min << endl;
    return max + min;
}

int main()
{

    int size;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size;

    if (size < 1)
    {
        cout << "\n ----> You can't enter the size of an array which is non-Positive integer and also zero." << endl;
    }
    else
    {
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cout << "\n Enter the number of " << i + 1 << " index :- ";
            cin >> array[i];
        }

        cout << "\n ----> Sum of maximum number and minimum number is " << sumOfMaxMin(array, size) << endl;
    }

    return 0;
}