//Find the second max of 3 numbers. (Use minimum number of comparisons)
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max, second_max;
    if (num1 > num2) {
        max = num1;
        second_max = num2;
    } else {
        max = num2;
        second_max = num1;
    }
    if (num3 > max) {
        second_max = max;
        max = num3;
    } else if (num3 > second_max) {
        second_max = num3;
    }
    printf("Second maximum: %d\n", second_max);

    return 0;
}

