/*program to calculate simple interest and maturity amount*/
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,SI,MA;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time period: ");
    scanf("%f",&t);
    SI = (p*r*t)/100;
    MA = p+SI;
    printf("Simple interest is: %f",SI);
    printf("\nmaturity amount is: %f",MA);
    return 0;
}