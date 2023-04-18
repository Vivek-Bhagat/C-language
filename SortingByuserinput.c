// Sure, I can help you with that.Here is a possible program in C programming language to sort an array by user input using bubble sort algorithm :

#include<stdio.h>
    // A function to swap two elements
    void
    swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    // Loop through all elements
    for (int i = 0; i < n - 1; i++)
    {
        // Loop through the unsorted part of the array
        for (int j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent elements and swap them if they are in wrong order
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

// A function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A main function to test the program
int main()
{
    // Declare an array and its size
    int arr[100];
    int n;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Ask the user to enter the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Print the original array
    printf("Original array: \n");
    printArray(arr, n);

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
