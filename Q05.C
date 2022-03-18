#include<stdio.h>
void avg(int arr[],int );
void max_min(int arr[],int);

int main()
{
    int n;
    int arr[100];
    printf("enter the number of students\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        avg(arr,n);
        max_min(arr,n);
}
void avg(int arr[],int n)
{
    float avg_penalty;
    int total=0;
    for(int i=0;i<n;i++)
    {
    total=total+arr[i]*2;
    }
    avg_penalty=total/n;
    printf("total=%d",total);
    printf("avg=%f",avg_penalty);
}

void max_min(int arr[],int n)
{
 int max_penalty,min_penalty;
 max_penalty=arr[0];
 min_penalty=arr[0];


 for(int i=0;i<n;i++)
 {
     if(arr[i]<=min_penalty)
        min_penalty=arr[i];
     else if (arr[i]>=max_penalty)
       max_penalty=arr[i];
 }
 printf("max_penalty=%d",max_penalty);
 printf("min_penalty=%d",min_penalty);

}

