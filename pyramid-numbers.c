#include <stdio.h>
int main()
{
    int i, j, k, num,row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number: ");
    scanf("%d", &num);

    // to print the number of rows using for loop
    for (i = 1; i <= row; i++)
    {
 
        // to print the spaces in the pyramid
        for (j = 1; j <=(row - i); j++)
        {
            printf(" ");
        }

        // to print the number
        for (k = 1; k < 2*(i) ; k++)
        {
            printf("%d", num);
        }

        // to add new line
        printf("\n");
    }

    return 0;
}