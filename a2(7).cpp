// to calculate profit or loss. Print the value of profit incurred, 
//loss incurred or no profit, no loss. (Inputs given as SP, CP)
#include<stdio.h>
main()
{
	int cp,sp,l,p;
	printf("Enter values of selling price and cost price:");
	scanf("%d %d",&sp,&cp);
	if(sp>cp)
	{
	 p=sp-cp;
	 printf("Profit is %d",p);
	}
	else if(sp<cp)
    {
     l=cp-sp;
	 printf("Loss is %d",l); 
    }
    else
    {
     printf("No profit No loss");
	}
	return 0;
}
