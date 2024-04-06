//to Calculate the selling price of a product if MRP  and discount are 
//given(Input MRP and discount from user).
#include<stdio.h>
main()
{
	int mr,dis,sp;
	printf("Enter Market Price and Discount:");
	scanf("%d %d",&mr,&dis);
	sp=mr-dis;
	printf("Selling price is %d",sp);
	return 0;
}
