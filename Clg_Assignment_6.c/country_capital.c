/*program to accept country name from user and return corresponding capital name*/
/*Question no.6*/
#include <stdio.h>
#include <string.h>
int main()
{   
    int i,c;

    char country_names[10][20] = {"india","brazil","canada","china","cuba",
                                  "france","germany","greece","italy","japan"};
    char capital_names[10][20] ={"new-delhi","brasilia","ottawa","beijing",
                                "havana","paris","berlin","athens","rome","tokyo"};

    char string[20];

    printf("Enter country name: ");
    gets(string);
    
    for(i = 0;i < 10;i++)
    {   
        c = strcmp(string,country_names[i]);
        if(c==0)
        {
            printf("capital of country %s is %s",country_names[i],capital_names[i]);
        }
    }
    return 0;
}