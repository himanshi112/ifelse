//A teacher has divided her classroom into groups of 5 based on their roll numbers. 
//The last roll number of each group has been elected as the leader of the group 
//who will manage the tasks performed by the group. Write a program for the teacher to 
//enter the roll number of the student and check if he/she is a Group Leader or not?
#include<stdio.h>
main()
{
	int r;
	printf("Entered roll number:");
	scanf("%d",&r);
	if(r%5==0)
	 printf("%d is Leader of group");
	else
	 printf("%d is not a leader of group");
	return 0;
}
