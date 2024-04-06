//Construct a flowchart to obtain 2 numbers (A and B) and an arithmetic operator (C) and
//then design a calculator depending upon the operator entered by the user.
//(For example, if C=”+”, you have to sum the two numbers.
//If C=”-”, you have to subtract the two numbers.
//If C=”*”, you have to print the product.
//If C=”/”, you have to divide the two numbers.)
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a and b");
	scanf("%d %d %d",&a,&b,&c);
	if(c='+')
	 printf("%d",a+b);
	else if(c='-')
	 printf("%d",a-b);
	else if(c='*')
     printf("%d",a*b);
    else if(c='a/b')
     printf("%d",a/b);
    return 0;
}
