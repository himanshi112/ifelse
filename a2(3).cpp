//to print the name of months. 
//(Input a number from the user in the range 1 to 12 and print January for 1, February for 2 and so on)
#include<stdio.h>
main()
{
	int m;
	printf("Enter month:");
	scanf("%d",&m);
    if(m==1)
    {
     printf("January");
	}
	else if(m==2)
    {
     printf("February");
	}
	else if(m==3)
    {
     printf("March");
	}
	else if(m==4)
    {
     printf("April");
	}
	else if(m==5)
    {
     printf("May");
	}
	else if(m==6)
    {
     printf("June");
	}
	else if(m==7)
    {
     printf("July");
	}
	else if(m==8)
    {
     printf("August");
	}
	else if(m==9)
    {
     printf("September");
	}
	else if(m==10)
    {
     printf("October");
	}
	else if(m==11)
    {
     printf("November");
	}
	else if(m==12)
    {
     printf("December");
	}
	else
	{
	 printf("Wrong month Entered");	
	}
	return 0;
}
