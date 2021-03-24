/*program to convert farenheit to celcius*/
#include <stdio.h>
int main()
{
    int F_temp,C_temp;
    printf("Enter temperature in farenheit: ");
    scanf("%d",&F_temp);
    C_temp = (5*(F_temp-32))/9;
    printf("temperature in celcius is : %d",C_temp);
    return 0;
}