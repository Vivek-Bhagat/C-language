// C program to print the full pyramid pattern of alphabets
#include <stdio.h>

int main()
{
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);

    //* first loop to print all rows
    for (int i = 1; i <= rows; i++)
    {

        //* inner loop 1 to print white spaces
        for (int j = 1; j <=(rows-i); j++)
        {
            printf(" ");
        }

        //* inner loop 2 to print star "*"
        for (int k = 1; k < 2 * i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
