//to check whether the last digit of a number (entered by user) is divisible by 3 or not.
#include<stdio.h>
main()
{
	int n,l;
	printf("Enter Number:");
	scanf("%d",&n);
	l=n%10;
	if(l%3==0)
    {
	 printf("%d is divisible by 3",n); 
    }
    else
    {
     printf("%d is not divisible by 3",n);
	}
	return 0;
}
