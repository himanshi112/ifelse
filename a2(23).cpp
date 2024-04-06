//Take an integer N as input and check whether it ends with 3 or 7.
//If it ends with 3, print “ends with 3”, if it ends with 7, print “ends with 7”,
//otherwise print the number itself.
#include<stdio.h>
main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n%10==3)
	 printf("End with 3");
	else if(n%10==7)
	 printf("End with 7");
	else
	 printf("%d",n);
	return 0;
}
