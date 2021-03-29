/*program to understand loop working*/
#include <stdio.h>
int main()
{
    int loop,finish=10;
    for(printf("\nstep>=%d",loop=1);loop<=10 && printf("\nstep2:: %d",loop);printf("\nstep4:: %d",loop)&&loop++)
    {
        printf("\n step 4 :: hello world");
    }
    return 0;
}
