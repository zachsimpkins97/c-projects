#include <stdio.h>

int main(void)
{
    int num1, num2, temp;

    printf("Please enter first number: \n");
    scanf("%d", &num1);

    printf("Please enter second number: \n");
    scanf("%d", &num2);

    printf("Numbers before swap\n");
    printf("Number1: %d\n", num1);
    printf("Number2: %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Numbers after swap\n");
    printf("Number1: %d\n", num1);
    printf("Number2: %d\n", num2);

    return 0;
}