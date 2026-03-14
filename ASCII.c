#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a Character: ");
    scanf("%c", &c);

    printf("Here is your ASCII character: %c = %d\n", c, c);

    return 0;
}