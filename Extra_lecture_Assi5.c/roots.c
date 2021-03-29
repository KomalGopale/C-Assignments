/*program to find roots of a quadratic equation*/
//quadratic equation is of type ax^2+bx+c where a,b,c are real numbers.
//and a should not equal to 0.
#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,discriminent,real_part,imag_part,root1,root2;
  printf("Enter value of a: ");
  scanf("%f",&a);
  printf("Enter value of b: ");
  scanf("%f",&b);
  printf("Enter value of c: ");
  scanf("%f",&c);
  discriminent = pow(b,2)-4*(a*c);
  if (discriminent == 0)
  {    
      printf("Both the roots are real and equal");
      root1 = root2 = -b/(2*a);
      printf("\nroot1 = %f",root1);
      printf("\nroot2 = %f",root1);
  }
  else if (discriminent > 0)
  {   
      printf("Both the roots are real and distinct");
      root1 = (-b + sqrt(discriminent))/2*a;
      root2 = (-b - sqrt(discriminent))/2*a;
      printf("\nroot1 = %f",root1);
      printf("\nroot2 = %f",root2);
  }
  else
  { 
      printf("Both the roots are complex and distinct");
      real_part = -b/2*a;
      imag_part = sqrt(-discriminent)/2*a;
      printf("\nroot1 = %f + %fi",real_part,imag_part);
      printf("\nroot2 = %f - %fi",real_part,imag_part);
  }
  return 0;
}