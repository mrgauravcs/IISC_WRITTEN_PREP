#include<stdio.h>
int arr[] = {12,43,54,65,45,23,5,465,34,65,76,87,34,65,23,65,23,567,8,452,54};
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int *a , int node,int n)
{
    //will check itself with children and replace root position with maximum among 
    //given node 
    int left = node*2+1;
    int right = node*2+2;
    //now to compare 3 terms and  take based action on that
    //t- if else condn such that all things are considered
    if(right <= n)
    {
        // if(a[left]>a[node])
        // {
        //     if(a[left]>a[right])
        //     {
        //         swap(a+left,a+node);                   
        //     }
        //     else
        //     {
        //         swap(a+right, a+node);
        //     }
        // }
        // if(a[right]>a[node])
        // {
        //     if()
        // }
        //I think it's wrong way to implement 
        int max = node;
        if(a[left] > a[node])
        {
            max = left;
        }
        if(a[max] < a[right])
        {
            max = right;
        }
        if(max!=node)
        {
            swap(a+max, a+node);
            max_heapify(a,max,n);
        }
    }
    if(left<=n)
    {
        if(a[left]>a[node])
        {
            swap(a+left,a+node);

            //problem is at the 76 why this problem appearing I can't figure out
            //and 76 is at the middle of ther array is it coincidence but I tried to run
            //for more terms max heapify still it didn't work so there must be some probem 
            //because of which it can't figure out the final value in the classic 
            // diagram

        }

    }
    return;
}   
int main()
{
    //maxheapify , buildmaxheap,
    //for node i children are (left child) 2i and (right child)2i+1 
    //let's design heapify first
    // int n, l , m , n;
    int arr[] = {12,43,54,65,45,23,5,465,34,65,76,87,34,65,23,65,23,567,8,452,54};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("size of the array is %d\n",n);

    // max_heapify(arr,10 ,n-1);

    //building max heap is done here and let's now focus on the next task is to takeout one element one by one and code

    for(int i=n/2+2; i>=0; i--)
    {
        max_heapify(arr,i,n-1);
    }
    printf("\n");
    int k;
    for(int i=0;i<n-1; i++)
    {
        k = n-1-i;
        swap(arr,arr+k);
        max_heapify(arr,0,k-1);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
}