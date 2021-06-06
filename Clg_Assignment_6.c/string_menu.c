/*menu driven program for string by using standard library functions*/
/*Question no.4*/
#include <stdio.h>
#include <string.h>
int main()
{ 
    int key;
    printf("This is a menu driven program to perform operations on string: ");
    printf("\nEnter the respective keys for your desired operation: ");
    printf("\n1 : to find length of a entered string");
    printf("\n2 : to copy a entered string");
    printf("\n3 : to concat one string to other string");
    printf("\n4 : to compare two strings");
    printf("\nEnter the key: ");
    scanf("%d",&key);
    if(key == 1)//to calculate length of a string:
    {   
        char str[20];
        printf("Enter a string: ");
        scanf("%s",str);
        int length;
        length = strlen(str);
        printf("String length: %d",length);
    }
    else if(key == 2)//to copy a string:
    {
        char str1[30];
        char str2[30];
        printf("Enter first String: ");
        scanf("%s",str1);
        strcpy(str2,str1);
        printf("Original string is: %s",str1);
        printf("\nCopied string is: %s",str2);
    }
    else if(key == 3)//to concate 1 string to other:
    {
        char str1[30];
        char str2[40];
        char str3[100];

        printf("Enter the first string: ");
        scanf("%s",str1);
        printf("Enter the second string: ");
        scanf("%s",str2);

        strcat(str3,str1);
        strcat(str3," ");
        strcat(str3,str2);
        strcat(str3," ");
        printf("Concatenation of both strings are: %s",str3);
    }
    else if(key == 4)//to compare two strings
    {   
        int c;
        char str1[50];
        char str2[50];
        printf("Enter first string: ");
        scanf("%s",str1);
        printf("Enter second string: ");
        scanf("%s",str2);
        c = strcmp(str1,str2);
        if(c == 0)
        {
            printf("Both the Strings are same");
        }
        else
        {
            printf("Both the strings are not same");
        }
    }
    else
    printf("Please Enter the valid key !");
    
    return 0;
}
