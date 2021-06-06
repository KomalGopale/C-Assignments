/*program to print number in words*/
/*Question no.1*/
#include <stdio.h>
int main()
{
   int number,rev_num=0,dummy_num,remainder;
   printf("Enter any number: ");
   scanf("%d",&number);
   dummy_num = number;
   //we first will reverse a entered number:
   while(dummy_num>0)
   {
       remainder = dummy_num%10;
       dummy_num = dummy_num/10;
       rev_num = rev_num*10 + remainder;
   }
   printf("Entered number is: ");
   while(rev_num>0)
   {
       remainder = rev_num%10;
       rev_num = rev_num/10;
       switch(remainder)
       {    
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("Please enter number other than any character");
                break;
       }
   }
   return 0;
}
