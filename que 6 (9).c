#include<stdio.h>
#include<conio.h>

int main()
{
    int yr, y;
    printf("Enter the year: ");
    scanf("%d", &yr);
    y = ((yr % 4 == 0) && (yr % 100 == 0) || (yr % 400 == 0));
    switch(y)
    {
        case 1: printf("%d is a leap year.", yr);
                break;

        case 0: printf("%d is not a leap year.", yr);
                break;

        default: printf("Invalid input!");
                 break;
    }


    return 0;
}
