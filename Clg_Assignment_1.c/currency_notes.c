#include <stdio.h>
#include <math.h>
int main()
{       /*QUESTION:6*/   
      /*program to calculate number of notes cashier have to give 
                                         customer according to withdrawl amount*/
   int a=1, b=5, c=10,Amount;
   printf("Enter amount to be withdraw: ");
   scanf("%d",&Amount);
   int X = Amount%b;                    
   int Y = Amount%c;
   int x = Amount/b;
   int y = Amount/c;
   int z = Amount/a;
   int l = Y/b;
   int m = Y%b;
   if(X!=0 && Y!=0)
   {   
       printf("\ncashier have to give %d notes of %d RS. and %d note/notes of %d RS. and %d notes of %d RS.",y,c,l,b,m,a);
       printf("\n             or");
   }
   if(X==0)
   {   
       printf("cashier have to give %d notes of %d RS.\n",x,b);
       printf("\n            or");
       printf("\ncashier have to give %d notes of %d RS.",z,a);
       
       if(Y==0)
       {
        printf("\n        or");
        printf("\ncashier have to give %d notes of %d RS.",y,c);
       }
       else
       {
        printf("\n           or ");
        printf("\ncashier have to give %d notes of %d RS. and %d note/notes of %d RS.and %d notes of %d RS.",y,c,l,b,m,a);
       }
   }
   else
   {
       //printf("              or");
       printf("\ncashier have to give %d notes of %d RS.and %d notes of %d RS.",x,b,X,a);
       printf("\n             or");
       printf("\ncashier have to give %d notes of %d RS.",z,a);
   }
  return 0;
}