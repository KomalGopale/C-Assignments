/*program to check whether an alphabet is a vowel or consonant*/
      
#include <stdio.h>
int main()
{
    char ch;
    printf("Input any alphabet: ");
    scanf("%c",&ch);
    if((ch =='a'|| ch =='A') || (ch =='e'|| ch =='E') || (ch =='i'|| ch=='I') || (ch =='o'|| ch =='O') ||( ch =='u'|| ch=='U'))
    {
      printf("Entered alphabet is a vowel.\n");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
      printf("Entered alphabet is a consonant.\n");
    }
    else
    {
      printf("Entered character is not an alphabet.\n");
    }
    return 0;
}