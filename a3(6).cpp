//Accept the number of days from the user and calculate the charge for the library according to the following:
//First five days:		Rs 2/day.
//Next 5 days:		Rs 3/day.
//Next 5  days: 		Rs 4/day
//After 15 days:	 	Rs 5/day
#include<stdio.h>
main()
{
	int charge,d;
	printf("Entered days:");
	scanf("%d",&d);
	if(d>=5)
	{
		charge=2*d;
		printf("charge id %d",charge);
	}
	else if(d>=10)
	{
		charge=(d-5)*3+5*2;
		printf("charge is %d",charge);
	}
	else if(d>=15)
	{
		charge=(d-15)*5+5*4+5*3+5*2;
		printf("charge is %d",charge);
	}
	return 0;
}
