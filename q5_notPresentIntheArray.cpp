/* Programmer = Sudhanshu Barnwal
Purpose = Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

Ex: arr=[3,0,1]
Output: 2
n=3, thus the range will be [0,3]
Ex: arr = [8,6,4,2,3,5,0,1]
Output: 7
n=8, thus the range will be [0,8]

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int sumOfNatural( int n ){
    int sum = 0 ;
    for (int i = 0; i <= n ; i++)
    {
        sum += i ;
    }
    return sum ;
}


int notPresentInTheArray_1( int array1[] ){
    int max = array1[0] ;
    for (int index = 0; index < 3 ; index++)
    {
        if ( array1[index] > max )
        {
            max = array1[index] ;
        }
    }
    
    int arraySum = 0 ;
    for (int index = 0; index < 3 ; index++)
    {
        arraySum += array1[index] ;
    }
    
    cout << "\n This number is not present in the arr1[] = { 3 , 0 , 1 } array i.e. " << sumOfNatural(max) - arraySum << endl ; 
    return 0 ;
}

int notPresentInTheArray_2( int array2[] ){
    int max = array2[0] ;
    for (int index = 0; index < 8 ; index++)
    {
        if ( array2[index] > max )
        {
            max = array2[index] ;
        }
    }

    int arraySum = 0 ;
    for (int index = 0; index < 8; index++)
    {
        arraySum += array2[index] ;
    }
    
    cout << "\n This number is not present in the arr2[] = { 8 , 6 , 4 , 2 , 3 , 5 , 0 , 1 } array i.e. " << sumOfNatural(max) - arraySum << endl ; 
    return 0 ;
}

int main()
{

    int arr1[] = { 3 , 0 , 1 } ;
    int arr2[] = { 8 , 6 , 4 , 2 , 3 , 5 , 0 , 1 } ;

    notPresentInTheArray_1(arr1);
    notPresentInTheArray_2(arr2);
    return 0;
}