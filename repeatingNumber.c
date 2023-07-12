#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10] = {0};
    int n, rem;

    printf("Enter the number:");
    scanf("%d", &n);

    while (n>0)
    {   

        /* code */
        rem = n%10;
        if(arr[rem]==1)
         break;
        arr[rem] = 1;
        n=n/10;
        
    }

    if(n>0){
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    

    return 0;
}