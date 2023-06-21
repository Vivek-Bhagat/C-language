
// ! Time complexity is (0)^log n

#include <stdio.h>
#include <stdlib.h>




int compare(const void* num1, const void* num2)
{
    if (*(int *)num1 > *(int *)num2)
        return 1;
    else
        return -1;
}

int getMedian(int array1[], int array2[], int n)
{
    int i = n - 1;
    int j = 0;

    while(array1[i]> array2[j] && j<n && i>-1)
    {
        int temp = array1[i];
        array1[i] = array2[j];
        array2[j] = temp;
        i--;
        j++;
    }

    qsort(array1, n, sizeof(int), compare);
    qsort(array2, n, sizeof(int), compare);

    return (array1[n - 1] + array2[0]) / 2;
}


int main()
{
    int n, array1[10], array2[10];
    printf("Enter the size of the arrray:");
    scanf("%d", &n);
    printf("Enter the element into the Array[1] sorted form\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter the element into the Array[2] sorted form\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }

    int n1 = sizeof(array1) / sizeof(array2);
    int n2 = sizeof(array1) / sizeof(array2);

    if(n1==n2){
        printf("The median of the sorted array is : %d", getMedian(array1, array2, n));
    }
    else{
        printf("Doesnt work for unequal array size.!");
    }

    return 0;
}