#include <stdio.h>
#include <stdlib.h>
void perfect(int [],int );
void read_array(int [],int );

int main()
{
    int arr[100];
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    read_array(arr,n);
    perfect(arr,n);

    return 0;
}
void read_array(int arr[],int b)
{
    int i;
    printf("\nEnter %d elements : \n",b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void perfect(int arr[],int b)
{
    int i,j,sum,temp;

    sum = 0;
    j=1;
    for(i=0;i<b;i++)
    {
        temp = arr[i];
        while(j <= (arr[i])/2)
        {
            if(arr[i] % j == 0)
            {
                sum = sum + j;
            }
            j++;
        }

        if(sum == temp)
            printf("\n %d is a perfect number ",temp);
        else
            printf("\n %d is not a perfect number ",temp);

    }
}
