#include <stdio.h>
// todo call 2 functions: jolly and deny

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    deny();
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Whinch nobody can deny!");
}