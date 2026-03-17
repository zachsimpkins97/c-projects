#include <stdio.h>

void fibonacci(int num);

int main(void)
{
    int num;

    printf("Please enter the number for Fibonacci Sequence: \n");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}

void fibonacci(int num)
{
    int a = 0, b = 1, c, i;

    if (num == 1)
    {
        printf("%d\n", a);
    }

    else if (num >= 2)
    {
        printf("%d\t%d", a, b);
    }
    for (i = 3; i <= num; i++)
    {
        c = a + b;

        printf("\t%d", c);

        a = b;
        b = c;
    }
    printf("\n");

}
