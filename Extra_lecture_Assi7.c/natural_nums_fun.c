/*program to accept a number n and dispaly n natural numbers by defining function*/
#include <stdio.h>
void naturalNums(int a);
int main()
{
    int n;
    printf("Enter how many terms you want to display: ");
    scanf("%d",&n);
    naturalNums(n);
    return 0;
}
void naturalNums(int n)
{   
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d  ",i);
    }
}
