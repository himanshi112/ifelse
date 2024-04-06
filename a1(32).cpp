//Write a program to take two numbers A and B as input from the user and
//print the number closest to (but less than) A which is completely divisible by B.
#include<stdio.h>
main()
{
	int a,b,n;
	printf("Enter value of a and b:");
	scanf("%d %d",&a,&b);
	n=a/b;;
	printf("%d",n);
	return 0;
}
