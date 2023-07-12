#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            count++;
        }
    }
    if (count = 0)
        return;

    bubbleSort(arr, n - 1);
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}
int main()
{

    int arr[] = {1, 8, 3, 5, 2, 6, 7, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printf("After Sorting:");
    printArray(arr, n);
    return 0;
}