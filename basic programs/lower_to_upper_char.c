#include <stdio.h>
char lower_to_upper(char a);
int main()
{
    char lower,upper;
    printf("Enter lowercase character: ");
    scanf("%c",&lower);
    upper = lower_to_upper(lower);
    printf("the uppercase letter is: %c",upper);
    return 0;
}
char lower_to_upper(char lower)
{
    char c2;
    c2 = (lower >= 'a' && lower <= 'z')?('A'+ lower -'a'):lower;
    return (c2);
}