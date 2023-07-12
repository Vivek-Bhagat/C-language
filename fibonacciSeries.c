#include <stdio.h>

int fibonacci(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }

    // test conditions
    else if (n == 1)
    {
        return 1;
    }

    else
    {   
        //fibonacci series general term Expression
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter the total number to be present in the Series:");
    scanf("%d", &n);

    printf("The Series is :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", fibonacci(i));
    }
    return 0;
}