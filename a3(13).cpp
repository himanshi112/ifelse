//In the above question take the first condition as divisibility of year by 100
#include <stdio.h>
int main() {
    int year;
    int c = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 != 0) {
        if (year % 4 == 0) 
           {c = 1;}
    }
    else {
         if (year % 400 == 0)
            {c = 1;}
    }

    if (c==1) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
