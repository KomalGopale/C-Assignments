/*program to calculate tax on salary of a employee*/
/*Question no-4*/
#include <stdio.h>
int main()
{
    int tax,salary;
    printf("Enter salary of employee: ");
    scanf("%d",&salary);
    if(salary<=150000)
    {
        printf("You dont have to pay tax!");
    }
    else if(salary>150000 && salary<300000)
    {
        tax = (salary*20)/100;
        printf("You need to pay %d Rs. tax",tax);
    }
    else if(salary>=300000)
    {
        tax = (salary*30)/100;
        printf("You need to pay %d Rs. tax",tax);
    }
    return 0;
}