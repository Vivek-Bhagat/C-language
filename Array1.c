#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];

    int n, sum=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element in the array:", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("The entered array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\nThe sum of the entered array is : %d", sum);

    return 0;
}
