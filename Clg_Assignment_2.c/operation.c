/*program to Accept two numbers to perform corresponding operations*/
         /* question no.6 */
#include <stdio.h>
int main()
{
    int X,Y,number,quotient,temp,remainder;
    printf("Enter first number: ");
    scanf("%d",&X);
    printf("Enter second number: ");
    scanf("%d",&Y);
    //To check equality:
    if(X == Y)
    {
        printf("Entered both numbers are equal");
        printf("\nWe will not check whether a number lies in both the numbers");
    }
    else
    {
        printf("Entered both numbers are not equal");   
    }
    //To check whether first number is less or not:
    if(X < Y)
    {
        printf("\n%d is less than %d",X,Y);
    }
    else if(X > Y)
    {
        printf("\n%d is greater than %d",X,Y);
    }
    //To find Quetient and Remainder:
    quotient = X/Y;
    remainder = X % Y;
    printf("\nAfter dividing %d by %d quotient is %d",X,Y,quotient);
    printf("\nAfter dividing %d by %d remainder is %d",X,Y,remainder);
    //To check whether a number is in range of two numbers:
    if(X != Y)
    {
        printf("\nwe will check whether a number lies between %d and %d",X,Y);
        printf("\nEnter any number: ");
        scanf("%d",&number);
        if(X < Y)
        {
             if(number>X && number<Y)
            {
               printf("%d  lies between %d and %d",number,X,Y);
            }
            else if(number<X || number>Y)
            {
               printf("%d does not lies between %d and %d",number,X,Y);
            }
            else if(number == X)
            { 
               printf("Entered number %d is equal to first number",number);
            }
            else //if(number == Y)
            {
               printf("Entered number %d is equal to second number",number); 
            }

        }
        else if(X > Y)
        {
            if(number>Y && number<X)
            {
               printf("%d is lies between %d and %d",number,X,Y);
            }
            else if(number<Y || number>X)
            {
               printf("%d does not lies between %d and %d",number,X,Y);
            }
            else if(number == X) 
            {
               printf("Entered number %d is equal to first number",number); 
            }
            else //if(number == Y)
            {
               printf("Entered number %d is equal to second number",number); 
            }
        }
    }
    //To swap two numbers:
    if(X != Y)
    {
       printf("\nWe will swap two numbers");
       printf("\nBEFORE swapping:\nX = %d\nY = %d",X,Y);
       temp = X;
       X = Y;
       Y = temp;
       printf("\nAFTER swapping:\nX = %d\nY = %d",X,Y);
    }
    else
    {
        printf("\nWe will not swap two numbers");
        printf("\nAs they both are equal");
    }
  return 0;
}