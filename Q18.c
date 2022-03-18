#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int arr[],int n);
void add(int arr[],int n,int m);
int main()
{
   int arr[100],n,m;
    printf("Value of n:\n");
    scanf("%d",&n);
     printf("Value of m:\n");
    scanf("%d",&m);
    read_array(arr,n);
    add(arr,n,m);
    return 0;
}
void read_array(int arr[],int n)
{   int i;
    printf("enter no.s\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void add(int arr[],int n,int m)
{
    int i=0,j=0;
    for(i=0;i<n-m;i++)
    {
         int sum=0;
        for(j=i+1;j<m+i+1;j++)
    {
        sum=sum+arr[j];
    }
     printf("for position %d, sum= %d\n",i+1,sum);
    }
}
