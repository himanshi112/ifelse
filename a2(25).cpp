// to obtain a number N and increment its value by 1 if the number is divisible by 4, 
//otherwise, decrement its value by 1.
#include<stdio.h>
main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n%4==0)
	 printf("%d",n+1);
	else
	 printf("%d",n-1);
	return 0;
}
