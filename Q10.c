#include<stdio.h>
void prime(int arr[],int n);


int main()
{
    int arr[100],n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    prime(arr,n);
    return 0;
}
void prime(int arr[],int n)
{
    int i,j,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
                flag=1;
                //nnnprintf("\n%d is not a prime number\n",arr[i]);
        }
        if(flag==0)
        {
            printf("\n%d is prime number\n",arr[i]);
        }
    }
}
