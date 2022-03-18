#include <stdio.h>
#include <stdlib.h>

int index(int [], int );
int main()
{
        int arr[100];
        int n,eqi;
        printf("\nEnter array size : ");
        scanf("%d",&n);

        printf("\nInput the array elements : ");
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        eqi = index(arr,n);
        printf("\nEquilibrium Index : %d\n", eqi);
        return 0;
}


int index(int arr[], int b)
{
int i, j;
int l_sum, r_sum;

for (i = 0; i < b; ++i)
    {

        l_sum = 0;
        for (j = 0; j < i; j++)
        l_sum += arr[j];

        r_sum = 0;
        for (j = i + 1; j < b; j++)
        r_sum += arr[j];

        if (l_sum == r_sum)
        return i;
    }

    return -1;
}
