//to take selling price and cost price as input and calculate the loss percentage.
//(Note :-  The value of S.P. should be less than C.P. else print “invalid”).
#include<stdio.h>
main()
{
	float cp,sp,l;
	printf("Enter values of selling price and cost price:");
	scanf("%f %f",&sp,&cp);
	if(sp<cp)
    {
     l=(cp-sp)/cp*100;
	 printf("Loss is %f",l); 
    }
    else
    {
     printf("invalid");
	}
	return 0;
}
