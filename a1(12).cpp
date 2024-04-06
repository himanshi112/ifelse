// to calculate the area and perimeter of a square.
#include<stdio.h>
#include<math.h>
main()
{
	int n,a,p;
	printf("Enter n:");
	scanf("%d",&n);
	a=pow(n,n);
	p=4*n;
	printf("Area=%d Perimeter=%d",a,p);
	return 0;
}
