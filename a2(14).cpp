// to display "Hello" if a number entered by the user is a multiple of five , otherwise print "Bye".
#include<stdio.h>
main()
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n%5==0)
    {
	 printf("Hello"); 
    }
    else
    {
     printf("Bye");
	}
	return 0;
}
