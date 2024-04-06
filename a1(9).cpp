// a flowchart to print a Welcome message. 
//Take input from the user and on the output window print ‘Welcome ____’.
//(Blank to  be filled by the input taken from User ).
#include<stdio.h>
#include<string.h>
main()
{
    char m[20];
	printf("Enter message");
//	scanf("%s",&m);
    gets(m);
	printf("%s",m);
	return 0;
}
