#include<stdio.h>
#include<memory.h>
int main()
{
    int arr[] = {23,54,6,7,233,65,13,543,5,4,31,65,76,45,7,45,76,3,44,575,744,76,45,64,763,6,7,457,457,45,473,554};
    int range = 1000;
    int count[range ];
    int arr_length = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<1000,i++)
    // {
    //     count[i] = 0;
    // }
    memset(count,0,sizeof(count));  
    // for(int i=0 ; i< range ; i++)
    // {
    //     printf("%d, ",count[i]);
    // }
    for(int i=0; i<arr_length; i++)
    {
        // first I need to insert count of each element in respective table of that array
        count[arr[i]]++; 
    }
    //now I have count of each element occuring in the array 
    //Now I added cumulative array so that final count of the count[max] is equal to the number 
    // for this value final submission won't work for the assignment duration for this
    // irrespective fort classic diagram for the irrespective value>
    //for the irrespective array for the alignment for sport for the calculus in the array for 
    //!submission accepted in final value iirrespective the character for the value
    for(int i=1; i < range; i++ )
    {
        count[i] = count[i-1]+count[i];
    }
    for(int i=range-1; i>1;i--)
    {
        while(count[i] > count[i-1])
        {
            arr[count[i]-1] = i;
            count[i]--;
        }
    }
    //now we got the required structure 
    for(int i=0; i<arr_length; i++)
    {
       printf("%d, ",arr[i]); 

    }
}
                                                                                          
                                                                                          
