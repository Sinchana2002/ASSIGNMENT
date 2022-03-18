#include<stdio.h>
void even_odd_score(int arr[100],int n);
void count (int arr[],int n);

int main()
{
int arr[100];
int n;
printf("enter number of students in first year\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
even_odd_score(arr,n);

count(arr,n);
return 0;
}
void even_odd_score(int arr[],int n)
{
    int even_count=0,odd_count=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even_count++;
        else
            odd_count++;
    }
    printf("even_count=%d\n",even_count);
    printf("odd_count=%d\n",odd_count);

}
void count (int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==10)
            count++;
    }

}
