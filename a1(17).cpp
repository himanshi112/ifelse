// to calculate the volume of a cube.
//(Input the side length of the cube from the user)
#include<stdio.h>
#include<math.h>
main()
{
	int s,v;
	printf("Enter side:");
	scanf("%d",&s);
	v=pow(s,3);
	printf("%d",v);
	return 0;
}
