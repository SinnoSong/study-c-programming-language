#include <stdio.h>

int main(void)
{
    int maxInt = 0x7fffffff + 1;
    float maxFloat = 1.0e20;
    float minFloat = 1.0e-20;
    printf("max int: %d\n", maxInt);
    printf("max float: %f\n", maxFloat);
    printf("min float: %f\n", minFloat);

    return 0;
}