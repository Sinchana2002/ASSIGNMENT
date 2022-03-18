#include<stdio.h>

void key(int arr[],int n)
{
    int num,count=0;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Key found at %d index",i);
            count=1;
        }
    }
    if(count==0)
        printf("Key not found");
}

int main()
{
    int arr[100];
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    key(arr,n);
    return 0;
}
