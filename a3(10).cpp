//The following rules are used to calculate the bonus for the employees of an organization.
//(i) If the pay is more than $3,000, the bonus amount is fixed, and it is equal to $300.
//(ii) If the pay is more than $1,600, but less than or equal to $3,000, the bonus will be 10% of the pay subject to a maximum of $240.
//(iii) If the pay is less than or equal to $1,600, the bonus is 15% of pay, subject to a minimum of $100.
#include<stdio.h>
main()
{
	int pay,b;
	printf("Entered pyment of employee");
	scanf("%d",&pay);
	if(pay>3000)
	{
		printf("Bonus is 300");
	}
	else if(3000>=pay && pay>=1600)
	{
		b=pay*10/100;
		if(b>240)
		{
			printf("Bonus is 240");
		}
		else
		{
			printf("No bonus");
		}
	}
	else if(pay<=1600)
	{
		b=pay*15/100;
		if(b>=100)
		{
			printf("Bonus is %d");
		}
		else
		{
			printf("Bonus is 100");
		}
	}
	return 0;
}
