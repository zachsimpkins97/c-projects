#include <stdio.h>

int main(void)
{
    int n;
    int cnt;

    printf("Please enter a number: \n");
    scanf("%d", &n);

    cnt = 0;
    if (n <= 1)
    {
        printf("%d cannot be prime\n", n);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cnt++;
                printf("%d\n", i);
            }
        }
        if (cnt > 2)
        {
            printf("%d cannot be prime\n", n);
        }
        else
        {
            printf("%d is prime\n", n);
        }
    }
    return 0;
}
