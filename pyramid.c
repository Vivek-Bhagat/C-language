#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter the number of rows for the pyramid : ");
    scanf("%d",&num);
     for ( i = 1; i <=num; i++)
     {
        printf(" ");

        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
     }
     
     return 0;
}