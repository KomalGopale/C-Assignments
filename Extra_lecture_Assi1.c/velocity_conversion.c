/*program to convert velocity in km/hr to m/sec*/
#include <stdio.h>
int main()
{
    float velocity1,velocity2;
    printf("Enter the velocity in km/hr: ");
    scanf("%f",&velocity1);
    velocity2 = (velocity1*5)/18;
    printf("velocity is: %f m/sec",velocity2);
    return 0;
}