// to show how to obtain the area of a triangle on the basis of the base and height.
#include<stdio.h>
main()
{
	int b, h,a;
	printf("Enter b and h:");
	scanf("%d %d",&b,&h);
	a=(b*h)/2;
	printf("Area is %d",a);
	return 0;
}
