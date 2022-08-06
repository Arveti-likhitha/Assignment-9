#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the month number: ");
    scanf("%d", &n);
    switch (n)
    {
        case 1: printf("month number: %d has 31 days.", n);
                break;

        case 2: printf("month number: %d has 28 or 29 days.", n);
                break;

        case 3: printf("month number: %d has 31 days.", n);
                break;

        case 4: printf("month number: %d has 30 days.", n);
                break;

        case 5: printf("month number: %d has 31 days.", n);
                break;

        case 6: printf("month number: %d has 30 days.", n);
                break;

        case 7: printf("month number: %d has 31 days.", n);
                break;

        case 8: printf("month number: %d has 31 days.", n);
                break;

        case 9: printf("month number: %d has 30 days.", n);
                break;

        case 10: printf("month number: %d has 31 days.", n);
                break;

        case 11: printf("month number: %d has 30 days.", n);
                break;

        case 12: printf("month number: %d has 31 days.", n);
                break;
    }


    return 0;
}
