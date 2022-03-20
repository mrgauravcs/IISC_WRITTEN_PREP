#include<stdio.h>
    int A[] = {1,2,4,5,6,7,8,9,0};
int partition(int A[], int size)
{
   int  n = sizeof(A)/sizeof(A[0]);
    printf("Size of the array is %d",n);
   printf("\n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ",A[i]);
    }
    A[3] = 24;
}
int main(int argc, char const *argv[])
{

    int n = sizeof(A)/sizeof(A[0]);
    partition(A,n);
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",A[i]);
    }
    return 0;
}
