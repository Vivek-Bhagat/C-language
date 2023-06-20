#include <stdio.h>
#include <stdlib.h>

int max(int m, int n)
{
    int res = m > n ? m : n;
    return res;
}

int max_of_four(int a, int b, int c, int d)
{
    int ans = max(a, max(b, max(c, d)));
    return ans;
}
int main()
{
    int a, b, c, d;
    printf("Enter any four number\n5");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The greatest amont these four number is = %d", ans);

    return 0;
}