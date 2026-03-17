#include <stdio.h>

int main(void)
    {
        int N,i;

        float average, sum = 0.0, numbers;

        printf("Please enter the amount of numbers you want to average: ");
        scanf("%d", &N);

        printf("Please enter %d numbers: ", N);

        for(i = 0; i < N; i++)
        {
            scanf("%f", &numbers);

            sum += numbers;
        }
        if (N > 0)
        {
            average = sum/N;
            

            printf("This is your average : %f", average);
        } 
        else
        {
            printf("Cannot average a number 0");
        }

        return 0;
        
    }
