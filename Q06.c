#include<stdio.h>
void display(int arr[],int);
void asc(int arr[],int);

int main()
{
    int n;
    int arr[100];
    printf("enter number of students\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   // read(arr,n);
    asc(arr,n);
    display(arr,n);
}
void asc(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
          if(arr[j]<arr[j+1])
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    printf("rankings in ascending order\n");
}

void display(int arr[],int n)
{
    printf("Highest- %d\n Lowest -%d\n",arr[0],arr[n-1]);
}
