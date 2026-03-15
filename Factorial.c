#include <stdio.h>

int main(void)
{
    int i, n;
    long int fact = 1;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Number after factor: %ld\n", fact);

    return 0;
}