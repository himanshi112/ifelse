//to take selling price and cost price as input and calculate the profit percentage.
//(Note :-  The value of S.P. should be greater than C.P. else print “invalid”).

#include<stdio.h>
main()
{
	float cp,sp,p;
	printf("Enter values of selling price and cost price:");
	scanf("%f %f",&sp,&cp);
	if(sp>cp)
    {
     p=(sp-cp)/cp*100;
	 printf("Profit is %f",p); 
    }
    else
    {
     printf("invalid");
	}
	return 0;
}
