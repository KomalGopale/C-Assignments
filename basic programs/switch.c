#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number between 1 and 10: ");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
      printf("entered number is: ONE");
      break;
       
      case 2:
      printf("entered number is: TWO");
      break;

      case 3:
      printf("entered number is: THREE");
      break;

      case 4:
      printf("entered number is: FOUR");
      break;
    
      case 5:
      printf("entered number is: FIVE");
      break;

      case 6:
      printf("entered number is: SIX");
      break;
      
      case 7:
      printf("entered number is: SEVEN");
      break;
      
      case 8:
      printf("entered number is: EIGHT");
      break;
      
      case 9:
      printf("entered number is: NINE");
      break;
      
      case 10:
      printf("entered number is: TEN");
      break;

      default:
      printf("please enter number between 1 and 10: ");
      break;
    }
  return 0;
}