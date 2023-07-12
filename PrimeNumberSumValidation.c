#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to print prime numbers between two given numbers
void printPrimes(int start, int end)
{
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to check if a number can be expressed as the sum of two primes
int isSumOfTwoPrimes(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
            return 1;
    }
    return 0;
}

int main()
{
    int  start, end, num;

    printf("To Print the Prime Number between the two Numbers-\n");
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    printPrimes(start, end);
    printf("\nTo know whether the given number is the sum of the Prime Number or not\n");
    printf("Enter the Number:");
    scanf("%d", &num);
    if (isSumOfTwoPrimes(num))
        printf("%d can be expressed as the sum of two primes.\n", num);
    else
        printf("%d cannot be expressed as the sum of two primes.\n", num);

 

    return 0;
}
