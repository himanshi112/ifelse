//to calculate the total marks obtained by a student in examination. (Subjects : - Hindi, Maths, English, Science, Computer)
//(Input marks of all 5 subjects from the user)
//and also calculate percentage.
#include<stdio.h>
main()
{
	float h,m,e,s,c,t,p;
	printf("Enter marks of hindi,math,science,chemistry,english:");
	scanf("%f %f %f %f %f",&h,&m,&e,&s,&c);
	t=h+m+e+s+c;
	p=(t/500)*100;
	printf("Percentage is %f",p);
	return 0;
}
