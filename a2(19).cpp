//to calculate the sum of two given integers. However, if the sum is between 15 to 20 it will return 20.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	if(100>=c<=999)
    {
	 printf("20"); 
    }
    else
    {
     printf("Invalid");
	}
	return 0;
}
