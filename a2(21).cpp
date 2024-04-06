//A company decided to give a bonus of 5% to an employee if his/her year of service is more than 5 years.
//Ask users for their salary and year of service and print the net bonus amount.
#include<stdio.h>
main()
{
	int sal,y,b;
	printf("Enter year and salary:");
	scanf("%d %d",&y,&sal);
	if(y>5)
	{
		b=sal*5/100;
		printf("Bonus is %d",b);
	}
	else
	{
		printf("No Bonus");
	}
	return 0;
}
