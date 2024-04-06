// to input the month number and print the number of days in that month.
//(Input a number from the user in the range 1 to 12 and print 31 for 1, 28 or 29 for 2 and so on)
#include<stdio.h>
main()
{
	int m;
	printf("Enter month:");
	scanf("%d",&m);
    if(m==1)
    {
     printf("31 days");
	}
	else if(m==2)
    {
     printf("28 or 29 days");
	}
	else if(m==3)
    {
     printf("31 days");
	}
	else if(m==4)
    {
     printf("30 days");
	}
	else if(m==5)
    {
     printf("31 days");
	}
	else if(m==6)
    {
     printf("30 days");
	}
	else if(m==7)
    {
     printf("31 days");
	}
	else if(m==8)
    {
     printf("31 days");
	}
	else if(m==9)
    {
     printf("30 days");
	}
	else if(m==10)
    {
     printf("31 days");
	}
	else if(m==11)
    {
     printf("30 days");
	}
	else if(m==12)
    {
     printf("31 days");
	}
	else
	{
	 printf("Wrong month Entered");	
	}
	return 0;
}
