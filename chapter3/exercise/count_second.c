#include <stdio.h>

int main(void)
{
    int age;
    unsigned long ageSeconds;
    printf("Please input your age:");
    scanf("%d", &age);
    ageSeconds = 3.156 * 10e7 * age;
    printf("You have been live %u seconds\n", ageSeconds);

    return 0;
}