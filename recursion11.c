#include<stdio.h>
#include<stdlib.h>

int fun(int n)
{
    if(n ==1)
    return 1;
    else
     return 1 + fun(n-1);
}
int main()
{
    int n=1;
    printf("%d", fun(n));
    return 0;
}