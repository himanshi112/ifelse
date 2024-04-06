//Accept any city from the user and display the monument of that city.
//                  City                                 Monument
//                  Delhi                               Red Fort
//                  Agra                                Taj Mahal
//                  Jaipur                              Jal Mahal
#include<stdio.h>
main()
{
	char c;
	printf("Enter city");
	scanf("%s",&c);
	if(c == 'delhi')
	 printf("Red fort");
	else if(c == 'agra'
	 printf("Taj Mahal");
	else if(c == 'jaipur')
	 printf("Jal Mahal");
	return 0;
}
