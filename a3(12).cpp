//Find whether a given year is a leap year.
//(Hint. A year is said to be a leap year if it is either divisible by 4 but not by 100 or divisible by 400.)
#include <stdio.h>
int main() {
    int year;
    int c = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 != 0) {
            c = 1;
        } else {
            if (year % 400 == 0) {
                c = 1;
            }
        }
    }

    if (c==1) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
