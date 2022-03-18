#include<stdio.h>
void total_bill(int arr[100],int n);
void main()
{
 int i,arr[100],n;
 //float t[i];
 printf("Enter the number of flats\n");
 scanf("%d",&n);
 printf("enter total units of electricity consumed by each flat\n");
 for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
total_bill(arr,n);
 }

 void total_bill(int arr[],int n)
 {

int total[10];
for(int i=0;i<n;i++)
{
 if(arr[i]>0 && arr[i]<=100)
 {
  total[i]=arr[i]*1.5;
  printf("Total_Bill of %d=%d\n",i,total[i]);
  }
  else if(arr[i]>100 && arr[i]<=250)
  {
   total[i]=(100*1.5)+(arr[i]-100)*2.3;
   printf("Total_Bill of %d=%d\n",i,total[i]);
   }
  else if(arr[i]>250 && arr[i]<=600)
  {
   total[i]=(100*1.5)+(150*2.3)+(arr[i]-250)*4;
   printf("Total_Bill of %d =%d\n",i,total[i]);
   }
   else if(arr[i]>600)
   {
    total[i]=(100*1.5)+(150*2.3)+(350*4)+(arr[i]-600)*5.5;
    printf("Total_Bill of %d=%d\n",i,total[i]);
    }
    else
    {
     printf("\nInvalid input");
     }
  }

     }

