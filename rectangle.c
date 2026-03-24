#include <stdio.h>

int area(int l, int w)
{
    return l * w;
}

int perimeter(int l, int w)
{
   return 2 * (l + w);
}

int main(void)
    {
        int l, w;

        printf("Please enter your rectangles length: \n");
        scanf("%d", &l);

        printf("Please enter your rectangles width: \n");
        scanf("%d", &w);

        printf("Here is your rectangles area: %d\n", area(l, w));
        printf("Here is your rectangles perimeter: %d\n", perimeter(l, w));

        return 0;
    }
