#include <stdio.h>

int main(void)
{
    printf("please print what foot want convert to centimeter:");
    int foot = 0;
    scanf("%d", &foot);
    double centimeter = foot * 2.54;
    printf("centimeter is %.2f\n", centimeter);
    return 0;
}