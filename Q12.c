#include <stdio.h>
#include <stdlib.h>
void read_array(int [],int );
void find_max_dig(int[],int);
void print_array(int [] ,int);

int main()
{
    int arr[100];
    int n;
    printf("\n Enter the size of array : ");
    scanf("%d",&n);
    read_array(arr,n);
    print_array(arr,n);
    find_max_dig(arr,n);

    return 0;
}
void read_array(int arr[],int b)
{
    int i;
    printf("\nEnter %d array elements: \n ",b);

    for(i=0;i<b;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print_array(int arr[],int b)
{
    int i;
    printf("{");
    for(i=0;i<b;i++)
    {
        printf(" %d \t ",arr[i]);

    }
    printf("}");
}
void find_max_dig(int arr[],int b)
{
    int i,s;
    int first,middle,last,sum,largest;
    sum = 0;

    for(i=0;i<b;i++)
    {
        first = arr[i]/100;
        s  = arr[i]%100;
        last = s % 10;
        middle = s/10;
        if(first > middle && first > last)
            largest = first;
        if(middle > first && middle > last)
            largest = middle;
        if(last > first && last > middle)
            largest = last;

        printf("\n Maximum digit in arr[%d] is %d ",i,largest);
        sum = sum + largest;

    }
    printf("\nSum of largest is : %d ",sum);



}

