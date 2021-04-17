/*pattern program - 5*/
#include <stdio.h>
int main()
{
   int i,j;
   char ch;
   for(i = 0; i < 4; i++)
   {   
       ch = 'D';
       for(j = 0; j < 4; j++)
       {
           printf("%c ",ch);
           ch--;
       }
       printf("\n");
   }
}