/*program to find count of each character occured in string*/
#include <stdio.h>
int main()
{
    char name[15];
    int i,j,count1,count2;
    printf("Enter the string less than 15 characters: ");
    scanf("%[^\n]",name);
    for(i=0; name[i]!='\0'; i++)
    {   
        count1 = 0;
        count2 = 0;
        for(j=i; name[j]!='\0'; j++)
        {
            if(name[i] == name[j])
            {
              count1++;
              break;
            }
             else
            {
              count2++;
            break;
            }
        }
        if(count1>=1)
        {
            printf("%c: occurs %d times\n",name[i],count1);
        }
        else
        {
            printf("%c: occurs %d times\n",name[i],count2);
        }

    }
    return 0;
}