#include <stdio.h>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    

    int arr[100];
    int N, x;
    printf("Enter the size of the array:");
    scanf("%d", &N);
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered  elements in the array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n Enter the element fo find in the array[]:");
    scanf("%d", &x);

    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}