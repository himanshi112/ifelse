//Construct a flowchart to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
//Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage <   40% : Grade F
#include<stdio.h>
main()
{
	int p,c,b,m,co,t,per;
	printf("Entered marks of phy,che,bio,math and comp:");
	scanf("%d %d %d %d %d",&p,&c,&b,&m,&co);
    t=p+c+b+m+co;
    per=(t/500)*100;
    if(per>90)
     printf("Grade A");
    else if(per>80)
     printf("Grade B");
    else if(per>70)
     printf("Grade c");
    else if(per>60)
     printf("Grade D");
    else if(per>40)
     printf("Grade E");
    else
     printf("Fail");
    return 0;
}
