//to obtain the Fahrenheit equivalent of a temperature given in Celsius
//where the relationship between the two scales of temperature is
#include<stdio.h>
main()
{
	float fe,c;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&fe);
	c=5/9*(fe-32);
	printf("Temperature converted fahrenheit to celcius %f",c);
	return 0;
}
