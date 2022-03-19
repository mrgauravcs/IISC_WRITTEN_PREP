#include<stdio.h>

int binary_search(int *arr,int n, int k)
{
    int low = 0;
    int high = n-1;
   int mid = (low+high)/2 ;
    while(low<high)
    {
        mid = (high+low)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
           low = mid+1 ;
        }
        else{
            high = mid -1 ;
        }
    }
    return -1;
 

}
int main()
{
    int arr[] = {6, 7, 9, 13, 21, 45, 101, 1024};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = binary_search(arr,n,101);
    if(k==-1)
    {
        printf("array element is not found ");
    }
    else
    {
        printf("location of the array is %d", k);
    }

    return 0;   
}   