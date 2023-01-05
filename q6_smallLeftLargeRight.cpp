/* Programmer = Sudhanshu Barnwal
Purpose = Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
Ex: arr=[1,6,5,7,10,8,9]
Output: 7
Explanation: Here all the elements to the left of 7 are smaller than it and all the elements to the right of it
are greater than it.
Ex: arr=[5,6,2,8,10,9]
Output: -1
Explanation: Here there is no element in the array which satisfies the given condition.

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int leftRight(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > arr[size - (1 + i)] and i <= (size - 1 - i))
            goto ans;
    }
    cout << "\n ----> "
         << i << endl;
    return 0;
ans:
    cout << "\n ----> "
         << -1 << endl;
    return 0;
}

int main()
{

    int size;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size;

    cout << endl;
    int array[size];
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the number of " << index + 1 << " index :- ";
        cin >> array[index];
    }

    leftRight(array, size);

    return 0;
}