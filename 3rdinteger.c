#include <stdio.h>

int main()
{
    int i = 2, sum = 0, num;

    printf("Enter the Limit : ");
    scanf("%d", &num);
    while (i < num)
    {
        printf("%d\n", i);
        if (i % 5 == 0)
        {
            sum += i;
        }
        i += 3;
    }

    printf("Sum of integers evenly divisible by 5: %d\n", sum);

    return 0;
}
