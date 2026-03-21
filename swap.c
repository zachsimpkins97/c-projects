#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


int main(void) {
    int a, b;

    printf("Please enter number 1: \n");
    scanf("%d", &a);

    printf("Please enter number 2: \n");
    scanf("%d", &b);

    printf("Numbers before %d %d \n", a, b);

    swap(&a, &b);

    printf("Numbers after %d %d \n", a, b);

    return 0;
}


