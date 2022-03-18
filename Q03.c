#include<stdio.h>

void bonus(int exp[100],int n)
{
    int bonus_salary;
    printf("enter experience\n");
    for(int i=0;i<n;i++)
    {
        if(exp[i]>=5 && exp[i]<=7)
        {
           bonus_salary=10600+10600*0.1;
            printf("Bonus salary=%d, bonus=10%\n",bonus_salary);
        }
        else if(exp[i]>=8 && exp[i]<=10)
        {
           bonus_salary=21300+21300*0.2;
            printf("Bonus salary=%d, bonus=20%\n",bonus_salary);
        }
        else
          {
              bonus_salary=32100+32100*0.3;
            printf("Bonus salary=%d, bonus=30%\n",bonus_salary);
    }
          }
}

int main()
{
    int n,exp[100];
    printf("enter number of employees\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&exp[i]);
    bonus(exp,n);
    return 0;
}
