//to input electricity unit charges and calculate the total electricity bill according to the given condition:
//For the first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
main()
{
	float u,t,bill;
	printf("Enter unit of bill:");
	scanf("%f",&u);
	if(u<=50)
	{
	 t=u*0.5;
	 bill=t+(0.2*t);
	 printf("bill is %f",bill);
    }
	else if(u<=150)
	{
	 t=(50*0.5)+(u-50)*0.75;
	 bill=t+(0.2*t);
	 printf("bill is %f",bill);
    }
	else if(u<=250)
    {
	 t=(50*0.5)+(100*0.75)+(u-150)*1.2;
	 bill=t+(0.2*t);
	 printf("bill is %f",bill);
    }
	else
	{
     t=(50*0.5)+(100*0.75)+(1.2*100)+(u-250)*1.5;
	 bill=t+(0.2*t);
	 printf("bill is %f",bill);
	}
	return 0;
}
