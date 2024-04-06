//If P amount of money is invested for N years at an annual rate of interest I, 
//the money grows to an amount T,where T is given by T = P (1 + I/100)N.
//Construct a flowchart to show how T is determined.
#include<stdio.h>
#include<math.h>
main()
{
	float p,n,i,t,b;
	printf("Enter p,n and i:");
	scanf("%f %f %f",&p,&n,&i);
	b=1+i/100;
	t=p*pow(b,n);
    printf("%f",t);
	return 0;
}
