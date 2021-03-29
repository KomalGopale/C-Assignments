/*program to find eligibility of admission for a professional course based on*/
//following criteria
//marks in maths >= 65
//marks in physics >= 55
//marks in chemistry >= 50
//total in all thhree subjects >= 190
//or
//total in maths and physics >=140

#include <stdio.h>
int main()
{
    int p,c,m,total,total_mp;
    printf("Eligibility criteria: \n");
    printf("Marks in maths >= 65\n");
    printf("And Marks in physics >= 55\n");
    printf("And Marks in chemistry >= 50\n");
    printf("And total in all three subject >= 190\n");
    printf("Or total in maths and physics >= 140\n");
    printf("--------------------------------------\n");
    printf("Input the marks obtained by candidate in mathematics: ");
    scanf("%d",&m);
    printf("Input the marks obtained by candidate in physics: ");
    scanf("%d",&p);
    printf("Input the marks obtained by candidate in chemistry: ");
    scanf("%d",&c);
    printf("total marks of maths, physics and chemistry: %d\n",m+p+c);
    printf("total marks of maths and physics: %d\n",m+p);
    
    if(m >= 65)
    {
        if(p >= 55)
        {
            if(c >= 50)
            {
                if((m+p+c) >= 190 || (m+p) >= 140)
                {
                    printf("the candidate is eligible for admission!!!\n");
                }
                else
                {
                    printf("the candidate is not eligible.\n");
                }
            }
            else
            {
                printf("The candidate is not eligible.\n");
            }
        }
        else
        {
            printf("The candidate is not eligible.\n");
        }  
    }
    else
    {
       printf("The candidate is not eligible.\n");
    }
  return 0;
}