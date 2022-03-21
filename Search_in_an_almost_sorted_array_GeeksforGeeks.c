#include<stdio.h>

/*
Search in an almost sorted array
Given an array which is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1]. Write an efficient function to search an element in this array. Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].
For example consider the array {2, 3, 10, 4, 40}, 4 is moved to next position and 10 is moved to previous position.
Example : 
 

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2 
Output is index of 40 in given array

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
Output: -1
-1 is returned to indicate element is not present
 */
//  Gaurav Chaudhari, email: mr.gaurav.cs@gmail.com, Monday, 3/21/2022  8:38:15 PM
//  3/21/2022, Mon, 8:37:53 PM
//! 1) first solution was to traverse entire array and swap with it's right position 
//! 2) another way is to the traverse array same just check 3 position every time and find the middle one that is correct possition o
// ! element now question is how can I get this to work in under normal circumstances still confused how to get this to work for 
//! final submission for what values thi still works under for the classic thein
int main()
{
    int low,high,mid;
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = sizeof(arr)/sizeof(arr[0]);
    low = 0;
    high = size -1; 
    int x = 25;
    int l,r,m;
    int position=-1;
    while(low <= high)
    {
        mid =low +( (high-low)>>1);        
        /* Ok everything is similar to binary search except corner cases 
        I am confused about corner cases so I will not worry about corner 
        cases for now */  
        if(arr[mid] == x)
        {
            position = mid;
        }
        if(mid >= low && arr[mid-1] == x)
        {
            position =  mid -1;
        }
        if(mid <= high && arr[mid+1] == x)
        {
            position =  mid+1;
        }
        if(arr[mid]>x)
        {
            high = mid -2;   
        }
        else
        {
            low = mid +2;
        }
    }
    printf("%d, is the position of given elemnt in the array",position);
}