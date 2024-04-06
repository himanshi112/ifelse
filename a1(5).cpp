//to show the steps in finding the simple interest on a given amount at a given rate of interest.
#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("Enter p, r and t:");
	scanf("%f %f %f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest is %f",si);
	return 0;
}
