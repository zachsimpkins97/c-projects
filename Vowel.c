#include <stdio.h>

int main(void)
{
    char c;

    printf("Please enter a character: \n");
    scanf("%c", &c);

    switch (c)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':

    printf("%c is a vowel! \n", c);

    break;

    default: 

    printf("%c is not a vowel! \n", c);

    }
    return 0;
}