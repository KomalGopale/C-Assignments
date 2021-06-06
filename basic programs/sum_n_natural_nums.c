#include <stdio.h>
int sumNaturalNums(int a);
int main()
{
   int n,sum1,sum = 0;
   printf("Enter sum of how many natural numbers you want: ");
   scanf("%d",&n);
   sum = sumNaturalNums(n);
   printf("sum of first %d natural numbers is %d",n,sum);
   return 0;
}
int sumNaturalNums(int n)
{
   int i,sum = 0;
   for(i = 1; i<= n; i++)
   {
       sum += i;
   }
   return sum;
}