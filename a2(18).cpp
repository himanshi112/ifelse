//Accept the temperature in degrees Celsius of water and check whether it is boiling or not (boiling point of water in 100oC).
#include<stdio.h>
main()
{
	int b;
	printf("Enter boiling point:");
	scanf("%d",&b);
	if(b==100)
    {
	 printf("Boiling point of water"); 
    }
    else
    {
     printf("Not a boiling point of water");
	}
	return 0;
}
