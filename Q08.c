#include<stdio.h>
void spent(int arr[100],int n);
void avg(int arr[100],int n);

int main()
{
    int arr[12];
    int n;
    printf("enter expenditure\n");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    spent(arr,n);
    avg(arr,n);
    return 0;
}
void spent(int arr[],int n)
{
    int i,more=arr[0],less=arr[0],m1,m2;
    for(i=0;i<n-1;i++)
    {
     if(arr[i]>more)
        {
                more=arr[i];
                m1=i;
        }
     if(arr[i]<less)
        {
            less=arr[i];
            m2=i;
        }
}
printf("\n\nspent_more=%d\n,spent_less=%d\n",m1+1,m2+1);

}
void avg(int arr[],int n)
{
    float avg_exp;
    int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+arr[i];
    }
    avg_exp=(float) total/12;
    printf("total=%d\n",total);
    printf("avg=%f\n",avg_exp);


}
