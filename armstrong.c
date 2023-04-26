#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // count the number of digits in the given number
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate the Armstrong number by summing the power of individual digits
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check whether the given number is an Armstrong number or not
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
