#include <stdio.h>

int main(void)
{
    float number;
    printf("Please a float number:");
    scanf("%f", &number);
    printf("Enter a floating-point value:%.2f\n", number);
    printf("fixed-point notation:%f\n", number);
    printf("exponential notation:%e\n", number);
    printf("p notation:%a\n", number);

    return 0;
}