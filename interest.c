#include <stdio.h>

float SI(float p, float y, float r)
{
    return (p * y * r) / 100;
}

int main(void)
{
    float p, y, r;

    printf("Please enter the princpal amount: \n");
    scanf("%f", &p);

    printf("Please enter the years: \n");
    scanf("%f", &y);

    printf("Please enter the rate: \n");
    scanf("%f", &r);

    printf("Here is the simple interest: %f \n", SI(p, y, r));

    return 0;
}
