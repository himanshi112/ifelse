//A shop will give a discount of 10% if the cost of the purchased quantity is more than 1000.
//Ask the user for quantity, Suppose, one unit will cost 100.
//Judge and print total cost for the user.
#include<stdio.h>
main()
{
	int q,c,p;
	printf("Entered quantity");
	scanf("%d",&q);
	c=1000*q;
	if(c>1000)
	{
		p=c-(c*10/100);
		printf("%d",p);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
