//to check whether a number is the largest 3 digit number.
#include<stdio.h>
main()
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n%7==0)
    {
	 printf("%d is divisible by 7",n); 
    }
    else
    {
     printf("%d is not divisible by 7",n);
	}
	return 0;
}
