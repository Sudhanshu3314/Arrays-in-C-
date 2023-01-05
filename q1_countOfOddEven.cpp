/* Programmer = Sudhanshu Barnwal
Purpose = Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
Even Numbers = 2
Explanation: The even numbers present in the array are 2,4 and the odd numbers present in the array
are 1,3 and 5.

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int Oddno(int arr[], int size)
{
    int countOdd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            countOdd++;
        }
    }
    return countOdd;
}

int main()
{

    int size;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size;

    int array[size];
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        cout << "\n Enter the number in " << i + 1 << " index :- ";
        cin >> array[i];
    }

    cout << "\n Number of ODD no. are " << Oddno(array, size) << endl;
    cout << "\n Number of EVEN no. are " << size - Oddno(array, size) << endl;

    return 0;
}