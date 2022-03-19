#include<stdio.h>


void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;   
}
int main()
{
    int arr[] = {12,43,54,23,5,32,343,54,23,54,23,5,4,54,23,54,23,5,423,25,423,4334,34,54,23,5,54};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i < n;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr + j ,(arr+ j+1));
            }
        }
    } 

    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
}