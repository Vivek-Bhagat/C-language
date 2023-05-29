#include <stdio.h>

int main()
{
    int arr[10];
    int n, num = 1, ctr = 0;
    int i, j;
    printf("enter the number of elements in the array : ");
    scanf("%d", &n);
    printf(" Input %d elements in the array \n", n);

    for (i = 0; i < n; i++)
    {
        printf("Elment %d is : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                ctr++;
                break;
            }
        }
    }
    printf("Total number of duplicate element is : %d", ctr);

    return 0;
}