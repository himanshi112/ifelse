//to display the last digit of a number.
//(Input the number from the user)
#include<stdio.h>
main()
{
	int n,l;
	printf("Enter number:");
	scanf("%d",&n);
    l=n%10;
	printf("%d",l);
	return 0;
}
