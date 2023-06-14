// ! WAP to print the number from 1-10 in such a way that when the number is odd add 1 and when even subtract 1.


#include<stdio.h>
#include<stdlib.h>

void odd();
void even();
int n =1;


void odd()
{
    if(n<=10)
    {
        printf(" %d", n+1);
        n++;
        even();
    }
    return ;
}

void even()
{
    if(n<=10)
    {
        printf(" %d", n-1);
        n++;
        odd();
    }
    return;
}

int main()
{
    
    odd();
}