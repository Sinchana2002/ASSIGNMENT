#include<stdio.h>

void count(int arr[] ,int);

void count(int arr[100],int n)
{
  int count_positive=0,count_negative=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>0)
        count_positive++;
      else
        count_negative++;
  }
  printf("count_positive=%d",count_positive);
  printf("count_negative=%d",count_negative);

}


int main()
{
    int arr[100];
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    count(arr,n);
    return 0;
}
