//to calculate how many books we can buy if we have x Rs .   (Cost of a book = Rs. y)(input x,y from user)
#include<stdio.h>
main()
{
	int m,p,b;
	printf("Enter money and price:");
	scanf("%d %d",&m,&p);
	b=m/p;
	printf("Books we can buy %d",b);
	return 0;
}
