//to calculate the volume of a cuboid.
//(Input the side lengths of the cuboid from the user)
#include<stdio.h>
main()
{
	int l,b,h,v;
	printf("Enter l,b and h:");
	scanf("%d %d %d",&l,&b,&h);
	v=l*b*h;
	printf("Volume of cuboid is%d",v);
	return 0;
}
