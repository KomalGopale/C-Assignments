/*program to calculate Average of marks of three subject to display class obtained*/
                  /* Question No.3 */
#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,total,out_marks,denominator;
    float Average,percent;
    printf("Enter marks of the first subject: ");
    scanf("%d",&sub1);
    printf("Enter marks of the second subject: ");
    scanf("%d",&sub2);
    printf("Enter marks of the third subject: ");
    scanf("%d",&sub3);
    total = sub1+sub2+sub3;
    Average = total/3;
    printf("Average of subject1, subject2, and subject3 is :%f",Average);
    //to display class obtained
    printf("\nEnter out of how many marks you have entered your marks: ");
    scanf("%d",&out_marks);
    denominator = 3*out_marks;
    percent = (total*100)/denominator;
    if(percent>70)
    {
        printf("Congratulations!!!you have obtained first class with distinction!!!");
    }
    else if(percent>=60 && percent<=70)
    {
        printf("you have obtained first class");
    }
    else if(percent>=50 && percent<=60)
    {
        printf("you have obtained second class");
    }
    else if(percent>=40 && percent<=50)
    {
        printf("you have obtained higher second class");
    }
    else if(percent>=35 && percent<=40)
    {
        printf("you have obtained pass class");
    }
    else
    {
        printf("you are fail!!!");
    }
    return 0;
}