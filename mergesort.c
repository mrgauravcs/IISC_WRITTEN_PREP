//I want to make merge procedure first so I will be taking two arrays and making vector of it
//I two sorted array and what to do with it can be consequently stored in the 
// lets not worrry about merge sort tackle small part first
#include<stdio.h>

int temp[10000];
void merge(int *a, int start1, int end1,int start2,int end2)
{
    //now my plan is to make correct order in temp array and write back to the original
    //array once merging is done for merging array will be same just index will be different
    //first I am going to the tackle the false alarm callls for the assignment for the
    //interspcecte ion stress in the final value of disection in the fall to
    //start1 end1 will be first part of the array,
    //our temporary array will be updated value till the final end2 

    // for(int i=start1; i<=end2; i++ )
    // {
        
    // }
    int k =start1;// pointer for the temporary array
    int i = start1;
    int j = start2;
    while(i<=end1 && j <= end2)
    {
        if(a[i] < a[j])
        {
            temp[k++] = a[i];
            i++;    
        }
        else
        {
            temp[k++] = a[j];
            j++;
        }
        //in
    }
    if(i>end1)
    {
        while(j<=end2)
        {
            temp[k++] = a[j++];
        }
    }
    else
    {
        while(i<=end1)
        {
            temp[k++] = a[i++];
        }
    }
      
    for(int i=start1; i<=end2; i++)
    {
        printf("%d, ",temp[i]);
        *(a+i)=temp[i];
    }
    printf("\n");

}


void  mergesort(int *a, int start, int end)
{
    if(start == end)
    {
        return;
    }
    // if(start == end-1)
    // {
    //     if(a[start]>a[end])
    //     {
    //         swap(a+start,a+end);
    //         return;
    //     }
    //     return;
    // }
    int mid = (start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,mid+1,end);
    
}
//what I want to break everything in group of two first and then combining now my algorithm work
//now it's working but breaks in the group of 3 
//its homework to find out why it doesn't work
int main()
{
    int arr[] = {34,43,54,65,89,120,201,301,405,402,76,76,56,23,13,566,34,667,424,524,663,643556,54353,4562,452,45,7633,565,2454,67   ,3,10,21,32,46,54,66,3454,54523,67346,70434,84340};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d size of the array \n",n);
    for(int i=0;i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    mergesort(arr,0,41);
    printf("\n");
    for(int i=0;i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
}