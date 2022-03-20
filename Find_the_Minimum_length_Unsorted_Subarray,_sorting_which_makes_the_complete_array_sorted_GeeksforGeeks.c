/* 
Find the Minimum length Unsorted Subarray, sorting which makes the complete array sorted
Given an unsorted array arr[0..n-1] of size n, find the minimum length subarray arr[s..e] such that sorting this subarray makes the whole array sorted. 
Examples: 
1) If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], your program should be able to find that the subarray lies between the indexes 3 and 8.
2) If the input array is [0, 1, 15, 25, 6, 7, 30, 40, 50], your program should be able to find that the subarray lies between the indexes 2 and 5.

Gaurav Chaudhari, email: mr.gaurav.cs@gmail.com, Saturday, 3/19/2022  3:29:00 PM */


#include<stdio.h>
// #include<maths.h>
#include<limits.h>

// 3/19/2022, Sat, 3:30:56 PM
int main()
{
    int Arr[] ={10,12,20,30,25,40,32,31,35,50,60};

    int n = sizeof(Arr)/sizeof(Arr[0]);
    int desc1,desc2,min,i;
    desc1=desc2=0;
    min = INT_MAX;
    for(i=1;i<n;i++)
    {
  /*!     I think first descent is correct but problem with last descent means if we sort that part 
       highest element in array  
       highest element is another anchor means all the elements after highest element are greater than that elements
       first part is clear just confused with second part
       -----------------------------------------------------------------------
       my initial assumption was wrong eg 1 100000 23 54 67 76 34 50 60 70 80 90 
       so there is no mention of shortest sub array just given a one subarray in question
       -----------------------------------------------------------------------
       so still confused how should I approach this problem 
       property of subarray max element is less than  next part 
       and min element is greater than first part
    -----------------------------------------------------------------------
    finally figured out something to solve problem 
    make two pointer to get spot descent 
    go from left to right and spot descent second pointer will be the final descent may be the final element of the subarray
        
 */
        if(Arr[i-1] > Arr[i])
        {
             desc1 = i; 
             break;
        }
    }
    i = n-1;
    //-----------------------------------------------------------------------
    while(i-- > 0)    
    {
        // *int in        int desc1,desc2,min;f cint iont function temprestiont 
        // _INC_CRTDEFS_MACRO
    
        //3/19/2022, Sat, 8:45:26 PM
        //? Half hour to write this code could have taken help when it's due being 
        //! persistent on something it's not necessary for this issue don't understand why it 


       //start : 3/19/2022, Sat, 9:00:01 PM
        if(Arr[i]<Arr[i-1])
        {
            desc2 = i;
            break;
        }
    }
    // ! going reverse would have solved this problem 
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for(int j=desc1; j<=desc2; j++)
    {
        if(mn > Arr[j])
        {
            mn = Arr[j];
        }
        if(mx < Arr[j])
        {
            mx = Arr[j];
        }
    } 

    int start , end;
    start = 0;
    end  =0;
    for(int i=0; i<desc1;i++)
    {
        if(Arr[i] > mn)
        {
            start = i;
        }
    }
    //!important to go reverse to check algorithm otherwise algorithm won't work
    for(int i = n-1 ; i>desc2; i--)
    {
        if(Arr[i] < mx )
        {
            end = i;
        }
    }

    printf("THE Range of smallest unsorted array is %d to %d \n",start,end);
}

//Gaurav Chaudhari, email: mr.gaurav.cs@gmail.com, Saturday, 3/19/2022  9:52:57 PM
//done this programme required little bit of intelligence loved this quesion