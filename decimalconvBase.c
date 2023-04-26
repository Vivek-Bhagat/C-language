#include <stdio.h>
#include <stdlib.h>

void convert(int num, int base);

int main()
{
    int num, base;

    // Input the decimal number
    printf("Enter the decimal number: ");
    scanf("%d", &num);

    // Input the base to convert to
    printf("Enter the base to convert to (2, 8, or 16): ");
    scanf("%d", &base);

    // Call the convert function
    convert(num, base);

    return 0;
}

void convert(int num, int base)
{
    int rem, i = 0;
    char result[100];

    // Compute the result
    while (num > 0)
    {
        rem = num % base;
        if (rem < 10)
        {
            result[i++] = rem + '0';
        }
        else
        {
            result[i++] = rem - 10 + 'A';
        }
        num /= base;
    }

    // Output the result in reverse order
    printf("The equivalent number in base %d is: ", base);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }
    printf("\n");
}
