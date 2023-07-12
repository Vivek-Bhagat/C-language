#include <stdbool.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int n;
    int arr[n];
    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the array:");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("After Sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}