//A store sells Vadapavs & Samosas. They want a system where they enter the number of Vadapavs (V) and Samosas (S) 
//a customer buys and a bill with the final price is automatically calculated and displayed. 
//A Vadapav costs 12?, while a Samosas costs 15?. Write a program to create such a system.
#include<stdio.h>
main()
{
	int a,b,v,s;
	printf("Enter quantity of vadapav and samosa");
	scanf("%d %d",&a,&b);
	v=12*a;
	s=15*b;
	printf("%d %d",v,s);
	return 0;
}
