#include <stdio.h>

int main(void)
{
    int a;
    float b;
    char c;

    printf("Integer: ");
    scanf("%d", &a);

    printf("\nFloat: ");
    scanf("%f", &b);

    printf("\nCharacer: ");
    scanf(" %c", &c);

    printf("\nHere are your values, Integer: %d, Float: %f, Character: %c", a, b, c);

    return 0;
}