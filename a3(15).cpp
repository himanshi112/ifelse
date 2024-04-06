//Accept the lengths of the three sides of a triangle to validate whether they can be 
//the sides of a triangle and then classify the triangle as equilateral (all three sides are equal),
//scalene (all three sides are different), or isosceles (exactly two sides are equal),
//and then to see whether it is a right-angled triangle
//(the sum of the squares of two sides is equal to the square of the third side.)
//(Hint. Three numbers are valid as the sides of a triangle if each one is positive and
//the sum of every two numbers is greater than the third.)

#include<stdio.h>
main()
{
	int a,b,c,t;
	printf("Enter three angle of triangle");
	scanf("%d %d %d",&a,&b,&c);
	t=a+b+c;
	if(t!=180){
		printf("Invalid");
	}
	if(a==b&&b==c)
	{
		printf("Equilateral triangle");
	}
	else if(a==90&&b!=90&&c!=90||a!=90&&b==90&&c!=90||a!=90&&b!=90&&c==90)
	{
		printf("Right angle");
	}
	else if(a>90&&b<90&&c<90||a<90&&b>90&&c<90||a<90&&b<90&&c>90)
	{
		printf("abtuse angle");
	}
	else
	{
		printf("Acute angle");
	}
	return 0;
}
