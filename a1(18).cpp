// to find the lateral surface area and Total surface area of a cuboid.
//(Input the side lengths of the cuboid from the user)
#include<stdio.h>
main()
{
	int l,b,h,la,t;
	printf("Enter length breath and height:");
	scanf("%d %d %d",&l,&b,&h);
	la=2+h*(l+b);
	t=2*(l*b+l*h+h*b);
	printf("Lateral surface area=%d Total surface area=%d",la,t);
	return 0;
}
