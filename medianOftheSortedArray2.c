#include<stdio.h>
#include<stdlib.h>

int getMedian(int arr1[], int arr2[], int n)
{
    int i = 0; // making the index number 0 of array1
    int j = 0; // making the index number 0 of array2

    int k;
    int m1 = -1;
    int m2 = -1;

    for (k = 0; k < n;k++)
    {
        if(i==n)
        {
            m1 = m2;
            m2 = arr2[0];
            break;
        }

        else if(j==n)
        {
            m1 = m2;
            m2 = arr1[0];
            break;
        }

        if(arr1[i]<=arr2[j])
        {
            m1 = m2;
            m2 = arr1[i];
            i++;
        }
        else{
            m1 = m2;
            m2 = arr2[j];
            j++;
        }
    }

    return ((m1 + m2) / 2);
}

int main()
{
    int arr1[10], arr2[10], n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the sorted element in the Array1[] :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the sorted element in the Array2[] :\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if(n1==n2){
        printf("The median of the array is: %d", getMedian(arr1, arr2, n));
    }
    else
    {
        printf("Unqual array size entered");
    }
}