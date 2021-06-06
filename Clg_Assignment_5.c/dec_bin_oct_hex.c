/*program to convert decimal to binary,octal,hexadecimal*/
/*Question.no 5*/
#include <stdio.h>
#include <math.h>
int decTobin(int decnum);
int decTOoct(int decnum);
void decTohex(int decnum);
int main()
{
    int bin_num = 0,oct_num=0,hex_num,decnum,remainder=0,position = 1;
    char ch[100];
    printf("Enter any decimal number: ");
    scanf("%d",&decnum);
    printf("binary conversion of entered decimal number is: %d\n",decTobin(decnum));
    printf("octal conversion of entered decimal number is: %d\n",decTOoct(decnum));
    decTohex(decnum);
    return 0;
}

//to convert decimal into binary:
int decTobin(int decnum)
{   
    int bin_num = 0,remainder = 0,position = 1;

    while(decnum!=0)
    {
        remainder = decnum%2;
        decnum = decnum/2;
        bin_num = bin_num + (remainder*position);
        position = position * 10;
    }
    return bin_num;
}

//to convert decimal to octal:
int decTOoct(int decnum)
{
  int oct_num = 0,position = 1;
  while(decnum != 0)
  {
    oct_num = oct_num + (decnum % 8) * position;
    decnum = decnum/8;
    position = position * 10;
  }
  return oct_num;
}

//to convert decimal into hexadecimal:
void decTohex(int decnum)
{ 
    int rem = 0,i=0; 
    char hexnum[50];
    while(decnum!=0)
    {
     rem = decnum%16;
     if(rem<10)
     {
        rem = rem+48;
     }
     else
     {
        rem = rem+55;
     }
     hexnum[i] = rem; 
     i++;
     decnum = decnum/16;
   }
   printf("hexadecimal conversion of Entered decimal number is: ");
   for(i=i-1; i>=0; i--)  
   {
     printf("%c", hexnum[i]);
   }
}
