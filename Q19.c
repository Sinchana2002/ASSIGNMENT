#include<stdio.h>
#include<stdlib.h>

void bubblesort(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int a[100],b[100];
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    bubblesort(a,n);
    return 0;
}
