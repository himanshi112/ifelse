//The grades in a certain class are determined by coursework and a written examination. 
//Both components of the assessment carry a maximum of 50 points.
//(i) A student must score a total of 45% or more in order to pass
//(ii) A total grade of 44% is moderated to 45%
//(iii) Each component must be passed with a minimum of 20 points
//(iv) If a student scores 45% or more, but does not achieve the minimum grade in one component, 
//    he is given a technical fail of 44%, which is not moderated to 45%.
//	Print whether the student has passed or failed and also the course total.
#include<stdio.h>
main()
{
	int mcw,mwe,tot;
	printf("Entered marks of course work and written examination:");
	scanf("%d %d",&mcw,&mwe);
	tot=mcw+mwe;
	if(mcw<20)
	{
		printf("Fail");
	}
	else if(mwe<20)
	{
		if(tot>44)
		{
			printf("Technical Fail");
		}
		else
		{
			printf("Fail");
		}
	}
	else if(tot==44)
	{
		printf("Moderate");
	}
	else if(tot>=45)
	{
		printf("pass");
	}
	else
	{
		printf("Not define");
	}
	return 0;
}
