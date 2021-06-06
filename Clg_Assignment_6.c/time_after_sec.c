/*increment of hour minutes and seconds after increment of second*/
/*Question no.1*/
#include <stdio.h>
void time(int H,int M,int S);
int main()
{
    int H,M,S,sec;
    printf("Enter the hours: ");
    scanf("%d",&H);
    printf("Enter the minutes: ");
    scanf("%d",&M);
    printf("Enter the seconds: ");
    scanf("%d",&S);
    time(H,M,S);
    printf("\nEnter seconds to increment time: ");
    scanf("%d",&sec);
    printf("After increment of %d seconds in above time",sec);
    S = S + sec;
    time(H,M,S);
    return 0;
}
void time(int H,int M,int S)
{   
    int m,h;
    if(S >= 60)
    {
        m = S/60;
        M = M + m;
        S = S % 60;

        if(M >= 60)
        {
            h = M/60;
            H = H + h;
            M = M % 60;
            printf("Time is: %d hours:%d minutes:%d seconds",H,M,S);
        }
        else
        {
           printf("\nTime is: %d hours:%d minutes:%d seconds",H,M,S); 
        }
    }
    else
    printf("\nTime is: %d hours:%d minutes:%d seconds",H,M,S);
}