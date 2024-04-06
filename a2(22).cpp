//A student will not be allowed to sit in an exam if his/her attendance is less than 75%.
//Take following input from the user. Number of classes held. Number of classes attended.
//And print, percentage of class attended. Is the student allowed to sit in the exam or not.
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter a and b");
	scanf("%f %f",&a,&b);
	c=(a/b)*100;
	if(c>75)
	{
		printf("Allowed");
	}
	else
	{
		printf("Not allowed");
	}
	return 0;
}
