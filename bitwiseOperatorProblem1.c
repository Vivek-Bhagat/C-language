#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int max_and =0, max_or=0, max_xor=0;
    for(int i=1; i<=n;i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int AND = i&j;
            int OR = i|j;
            int XOR = i^j;

            if( AND < k && AND > max_and)
            max_and = AND;

            if( OR < k && OR > max_or)
            max_or = OR;

            if( XOR < k && XOR > max_xor)
            max_xor = XOR;
        }
    }
    printf("max_and : %d\nmax_or  : %d\nmax_xor : %d", max_and, max_or, max_xor);
}

int main()
{
    int n, k;
    printf("Enter the two number :");
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
