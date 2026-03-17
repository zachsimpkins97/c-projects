#include <stdio.h>

int main(void)
{
    int num, i;

    printf("Please enter the number you want the factos of : ");

    scanf("%d", &num);

    printf("Here are the factors of %d : ", num);

    for (i = 1; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                printf("\t%d\n", i);
            }
        }
    return 0;
}
