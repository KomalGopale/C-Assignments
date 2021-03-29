/*program to calculate profit and loss on a transaction*/
#include <stdio.h>
int main()
{
    int cprice,sprice,pro_loss_amount;
    printf("Input cost price: ");
    scanf("%d",&cprice);
    printf("Input selling price: ");
    scanf("%d",&sprice);
    if(sprice > cprice) //for profit
    {
      pro_loss_amount =  sprice-cprice;
      printf("\nYou can book your profit amount: %d\n",pro_loss_amount);
    }
    else if(cprice > sprice)//for loss
    {
      pro_loss_amount = cprice-sprice;
      printf("\nYou can book your loss amount: %d\n",pro_loss_amount);
    }
    else
    printf("\nYou are running in no profit no loss condition.");
    return 0;
}
