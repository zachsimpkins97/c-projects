#include <stdio.h>

int ASCIIcon(char c)
{
    int t;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        t = (int) c;
    }
    return t;
}

int main(void)
{
    char c;
    int result;

    printf("Please enter a character: \n");
    scanf("%c", &c);

    result = ASCIIcon(c);

    printf("Here is the your result %c --- %d\n", c, result);

    return 0;
}


