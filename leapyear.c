#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    int startYear, endYear, i;

    printf("Enter start year: ");
    scanf("%d", &startYear);

    printf("Enter end year: ");
    scanf("%d", &endYear);

    printf("List of leap years between %d and %d:\n", startYear, endYear);

    for (i = startYear; i <= endYear; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
