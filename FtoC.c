#include <stdio.h>

float FtoC(float f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

int main(void)
{
    float f;

    printf("Please enter a number to convert: \n");
    scanf("%f", &f);

    printf("Here is your number %f\n", FtoC(f));

    return 0;
}
