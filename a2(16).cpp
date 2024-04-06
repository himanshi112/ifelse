// to check whether a number entered is a three digit number or not.
#include<stdio.h>
main()
{
	int a;
	printf("Enter Number:");
	scanf("%d",&a);
	if(100>=a<=999)
    {
	 printf("%d is three digit number",a); 
    }
    else
    {
     printf("%d is not three digit number",a);
	}
	return 0;
}
