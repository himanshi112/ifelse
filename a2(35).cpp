//Roller Coasters require children to have a minimum height of 5 feet. 
//Any child below this height is generally not allowed on them. 
//Write a program to accept a child’s height in inches and display if he or 
//she will be allowed to ride or not. 
#include<stdio.h>
main()
{
	int h;
	printf("Entered height of children");
	scanf("%d",&h);
	if((h/12)>=5)
	 printf("Allowed to ride");
	else
	 printf("Not allowed to ride");
	return 0;
}
