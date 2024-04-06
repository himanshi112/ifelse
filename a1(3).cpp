//to show how to obtain the daily wage of a worker on the basis of the hours worked during the day.
#include<stdio.h>
main()
{
	int h,w,sal;
	printf("Enter hour and wage:");
	scanf("%d %d",&h,&w);
	sal=h*w;
	printf("salary is %d",sal);
	return 0;
}
