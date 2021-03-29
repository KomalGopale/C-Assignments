/*program to accept a number n and dispaly n natural numbers by reverse order*/
#include <stdio.h>
void RevNaturalNums(int a);
int main()
{
    int n;
    printf("Enter from which number you want to reverse numbers: ");
    scanf("%d",&n);
    RevNaturalNums(n);
    return 0;
}
void RevNaturalNums(int n)
{   
    int i;
    for(i=n; i>=1; i--)
    {
       printf("%d\t",i);
    }
}
