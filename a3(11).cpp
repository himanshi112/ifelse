//A certain steel is graded according to the following conditions:
//(i) Rockwell-hardness > 50
//(ii) Carbon content > 0.7
//(iii) Tensile strength > 5600 kg/cm2
//The steel is graded as follows:
//a. Grade 10, if all the conditions are satisfied
//b. Grade 9, if conditions (i) and (ii) are satisfied
//c. Grade 8, if conditions (ii) and (iii) are satisfied
//d. Grade 7, if conditions (i) and (iii) are satisfied
//e. Grade 0, otherwise

#include<stdio.h>
main()
{
	float rh,ts,cc;
	printf("Entered level of reckwell hardness,carbon content and tensile strenght");
	scanf("%f %f %f",&rh,&ts,&cc);
	if(rh>50 && cc>0.7 && ts>5600)
	{
		printf("Grade 10");
	}
	else if(rh>50 && cc>0.7)
	{
		printf("Grade 9");
	}
	else if(cc>0.7 && ts>5600)
	{
		printf("Grade 8");
	}
	else if(rh>50 && ts>5600)
	{
		printf("Grade 7");
	}
	else if(rh>50 || cc>0.7 || ts>5600)
	{
		printf("Grade 6");
	}
	else
	{
		printf("Grade 0");
	}
	return 0;
}
