/*program to take input temperature in centigrade and to display suitable message*/
#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&temp);
    if( temp < 0 )
    {
        printf("freezing wether");
    }
    else if( 0 < temp && temp < 10 )
    {
        printf("very cold wether");
    }
    else if(10 < temp && temp < 20 )
    {
        printf("cold wether");
    }
    else if(20 < temp && temp < 30)
    {
        printf("normal in temperature");
    }
    else if(30 < temp && temp < 40)
    {
        printf("its hot");
    }
    else
        printf("its very hot");  
    return 0;
}