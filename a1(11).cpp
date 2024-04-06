// to calculate the area and perimeter of a rectangle.
#include<stdio.h>
main()
{
	int l,b,a,p;
	printf("Enter l and b:");
	scanf("%d %d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area=%d Perimeter=%d",a,p);
	return 0;
}
