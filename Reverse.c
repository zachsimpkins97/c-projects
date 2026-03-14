#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alpha;

    printf("Please enter a lowercase or uppercase letter: ");

    alpha = getchar();

    printf("The reverse of %c is: ", alpha);

    if(islower(alpha))
    {
        printf("%c\n", toupper(alpha));
    }
    else
    {
        printf("%c\n", tolower(alpha));
    }
    return 0;
}