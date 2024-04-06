//to check whether a number is the smallest 4 digit number.
#include<stdio.h>
main()
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n==1000)
    {
	 printf("%d Smallest four digit number",n); 
    }
    else
    {
     printf("Invalid");
	}
	return 0;
}
