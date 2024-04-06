//to check whether a person is eligible for voting or not. Age for voting is 18 years.
#include<stdio.h>
main()
{
	int a;
	printf("Enter age:");
	scanf("%d",&a);
	if(a>=18)
    {
	 printf("Eligible for votting"); 
    }
    else
    {
     printf("Not eligible for votting");
	}
	return 0;
}
