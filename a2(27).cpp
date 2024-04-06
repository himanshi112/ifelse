//to obtain the length (L) and breadth (B) of a rectangle and 
//check whether its area is greater or perimeter is greater or both are equal.
#include<stdio.h>
main()
{
	int l,b,a,p;
	printf("Enter length and breath");
	scanf("%d %d",&l,&b);
	a=l*b;
	p=2*(l+b);
	if(a == p)
	 printf("Equal");
	else if(p>a)
	 printf("perimeter is greater");
	else if(a>p)
     printf("Area is greater");
    return 0;
}
