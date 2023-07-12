#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d", &num);
    //storing the original value in n so that it wont change after execution
    int n = num;

    // reversing the number
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // test conditions to check the number is palindrome or not
    if (num == rev)
    {
        printf("Palindrome Number %d", num);
    }

    else
    {
        printf("Not Palindrome number, %d",num);
    }

    return 0;
}