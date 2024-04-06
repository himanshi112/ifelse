//to accept the cost price of a bike and display the road tax to be paid according to the following criteria : 
//        Cost price (in Rs)                                       	Tax
//        > 100000                                                  	15 %
//        > 50000 and <= 100000			10%
//        <= 50000	                                                  	5%
//150000
#include<stdio.h>
main()
{
	int cp;
	printf("Entered cost price:");
	scanf("%d",&cp);
	if(cp>100000)
	 printf("Road tax is %d",cp*15/100);
	else if(cp>50000 && cp<10000)
	 printf("Road tax is %d",cp*10/100);
	else if(cp<=50000)
	 printf("Road tax is %d",cp*5/100);
    return 0;
}
