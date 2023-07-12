#include<stdio.h>

void fun();

void fun( int n)
{
    if(n==0)
    return;
    else
    {
        printf("%d",n);
        return fun(n-1);
    }
}

int main()
{
    fun(8);
    return 0;
}