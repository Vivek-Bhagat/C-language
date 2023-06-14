#include<stdio.h>
#include<stdlib.h>

int fun(int n)
{
    if(n ==0)
    return 1;
    else
     return 7 + fun(n-2);
}
int main()
{
    // int n=1;
    printf("%d", fun(4));
    return 0;
}