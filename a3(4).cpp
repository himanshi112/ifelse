//to calculate the electricity bill (Accept the number of units from the user) according to the following criteria:        		                                                   Unit	 					Price  
//First 100 units                                               	no charge
//Next 100 units                                              	Rs 5 per unit
//After 200 units                                             	Rs 10 per unit
//(For example if input unit is 350 then total bill amount is Rs2000)
#include<stdio.h>
main()
{
	int u,b;
	printf("Enter unit of bill");
	scanf("%d",&u);
	if(u<=100)
	 {
	 	printf("No charge");
	 }
	else if(u<=200)
	 {
	 	b=(u-100)*5;
	    printf("%d",b);
	 }
	else if(u>200)
	 {
	 	b=(100*5)+(u-200)*10;
	    printf("%d",b);
	 }
	else
	 {
	 	printf("Invalid");
	 }
	return 0;
}
