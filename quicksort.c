#include<stdio.h>
void swap (int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *a,int start, int end)
{
     //now I want to just make sure all elements less than pivot comes before half
     //and all the elements greater than comes in later half
     //now let's make two pointers one for iteration and one for the comes hte 
     //latest element int the array for this array now let's figure out
     //solution for the classic
    // if(start == end)
    // {
    //     return
    // }
    int pivot = a[end];
    int i,j;
    i=0;
    j=0;
    while(i<end)
    {
        if(a[i] >= pivot)
        {
            i++;
        }
       else if(a[i]<pivot){
            // j++;
            // swap(a+j,a+i);
            //pivot not working for this assigment
            //any other alternative to figure out for this interespective sore 
            //now the the our pointer j is maintaining all the low variables so what will happen when we intorducred
            //smaller variable than required it will swap and wait for the end 
            swap(a+j,a+i);
            i++;
            j++;
            //error not iterating for this group 
            //Gaurav Chaudhari, email: mr.gaurav.cs@gmail.com, Thursday, 3/17/2022  2:27:10 PM
        }
    }
    if (j<=end){
    swap(a+j,a+end);
    return j;     
    }
}
int Quicksort(int *a,int start, int end)
{
    if(start>=end) return 0;
    int splt = partition(a,start,end);
    Quicksort(a, start,splt-1);
    Quicksort(a, splt+1,end);   
    return 0;
}
int main()
{
    
    int arr[] = {3,43,65,12,454,1,3,54,6,576,2,354,65,7,100};
    // int arr[] = {10,8};
    int n = sizeof(arr)/sizeof(arr[0]); 
    // printf("%d------\n",partition(arr,0,n-1));
    Quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
}