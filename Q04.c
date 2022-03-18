#include<stdio.h>

void avg(int arr[10])
{
    float class_avg;
    int count_above=0,count_below=0,sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    class_avg=sum/10;
    for(int i=0;i<10;i++)
    {
       if(arr[i]>class_avg)
            count_above++;
       else
        count_below++;
    }
    printf("count_above=%d\n",count_above);
    printf("count_below=%d\n",count_below);
    printf("avg_class=%f\n",class_avg);

}


int main()
{
   // int n;
    int arr[10];
    printf("enter 10 number of  students marks\n");
    //scanf("%d",&n);
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
    avg(arr,int);

}

