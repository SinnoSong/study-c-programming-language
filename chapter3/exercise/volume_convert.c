#include <stdio.h>

int main(void)
{
    int cups;
    printf("Please cup numbers:");
    scanf("%i", &cups);
    float ounces = cups * 8;
    printf("There are %f ounce\n", ounces);
    float tablespoon = cups * 8 * 2;
    printf("There are %f tablespoon\n", tablespoon);
    float teaspoon = cups * 8 * 2 * 3;
    printf("There are %f teaspoon\n", teaspoon);

    return 0;
}