#include <stdio.h>

int main(void)
{
    int weight = 950;
    double co2Weight = 3.0e-23;
    double result = weight / co2Weight;
    printf("The count is:%f", result);

    return 0;
}