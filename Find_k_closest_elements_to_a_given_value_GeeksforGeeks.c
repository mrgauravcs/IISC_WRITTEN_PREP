/* Find k closest elements to a given value
Difficulty Level : Medium
Last Updated : 13 Apr, 2021
Given a sorted array arr[] and a value X, find the k closest elements to X in arr[]. 

Examples: 

Input: K = 4, X = 35
       arr[] = {12, 16, 22, 30, 35, 39, 42, 
               45, 48, 50, 53, 55, 56}
Output: 30 39 42 45
Note that if the element is present in array, then it should not be in output, only the other closest elements are required. */

//! Start 3/20/2022, Sun, 12:49:08 PM
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
/* 
My Goal is to implement some variantion of binary search but based on the difference 
between adjacent values for this problem
but problem is even if I search the value 


______________M________________________________________
  | ---------k-------------------|
  elements can be on the right side or left side that is not decided yet
 */


int main()
{
    int i,j,l,m,n;

    int arr[] = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    int k = 35;
    int x = 4;

    //!now first binary search for 35 in the array 

    int size = sizeof(arr)/sizeof(arr[0]);
    int low, high,mid;
    low = 0;
    high = size -1;
    mid = (low+high)/2;
    int loc =-1;
    while(low<high)
    {
        mid = (low+high)/2;

        if(arr[mid]== k)
        {
            loc = mid ;
            break;
        }
        if(arr[mid]<k)
        {
            low = mid+1;
            continue;
        }
        else if(arr[mid]>k)
        {
            high = mid-1;
        }
    }
    if(loc ==-1)
    {
        loc =low;
    }
    //3/20/2022, Sun, 1:31:57 PM
    //almost 40 minutes just to implement binary search
    //now we have approx location of required
    int diff;
    int min_diff= INT_MAX;
    //we have max diff to track the array max difference now I want two way pointer traveler
    //!  check left and right both sides for lowest element to check elements closest to the given value
    int xcount = x;
    int left,right;
    left = right = loc;

        left--;
    right++;
    //!problem is to track the boundries left and right
    min_diff = abs(k - arr[loc]);
    printf("%d, ",arr[loc]);
    // int you just need better life _thiscall
    int diff_left,diff_right; 
    while(xcount-- )
    {
        if(left>=0)
        {
            diff_left =abs(arr[left] - k );
        }
        else
        {
            diff_left == INT_MAX;
        }
        if(right <= n-1)
        {
            diff_right = abs(arr[right]-k);   
        }
        else
        {
            diff_right = INT_MAX; // this code makes sure if right is out of bound then 
            //always other left will be considered
        }


        if(diff_left >= diff_right)
        {
            min_diff = diff_left; 
            printf("%d, ",arr[left]);
            left--;
        }
        else
        {
            min_diff = diff_right;
            printf("%d, ",arr[right]);
            right++;
        }


       // now I am confused with go with two pointer or just maintain the one pointer to the things  
       //! focus lets focus on the closest the element then we will find next x-1 elements
        //3/20/2022, Sun, 1:58:35 PM
        

    }  
    return 0;
}
//Gaurav Chaudhari, email: mr.gaurav.cs@gmail.com, Sunday, 3/20/2022  2:51:29 PM