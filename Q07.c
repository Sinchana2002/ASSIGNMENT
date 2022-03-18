#include<stdio.h>
void count(int arr[100],int n);
void avg(int arr[100],int n);

int main()
{
    int n;
    int arr[100];
    printf("enter the number of tax payers\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        avg(arr,n);
        count(arr,n);
        return 0;

}
void count(int arr[],int n)
{

    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>250000)
        count1++;
    else if(arr[i]>50000 && arr[i]<150000)
    count2++;
    }
    printf("count1=%d\n",count1);
    printf("count2=%d\n",count2);

}
void avg(int arr[],int n)
{
float avg_tax;
int total=0;
for(int i=0;i<n;i++)
{
total=total+arr[i];
}
avg_tax=(float)total/n;
printf("avg_tax=%0.2f\n",avg_tax);
printf("total=%d\n",total);
}




