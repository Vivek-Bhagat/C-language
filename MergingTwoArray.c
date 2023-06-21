#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the size of the array1[]:");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter the elements in the array1[]\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the array2[]:");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter the elements in the array2[]\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // printing the enterd element in the array
    printf("Entered elements are :\n");
    printf("Array1[]:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\nArray2[]:");
    for (int i = 0; i < m; i++)
    {
        printf("%d\t", arr2[i]);
    }

    // !now merging the both array
    int size = n + m; // total size of the array
    int arr3[size];
    // copying the first element
    int i, j;
    for (i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    // copying array 2 elements into an array
    for (i = 0, j = n;
         j < size && i < m; i++, j++)
    {
        arr3[j] = arr2[i];
    }

    // displaying the array
    printf("\nAfter merging the two array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr3[i]);
    }

    return 0;
}