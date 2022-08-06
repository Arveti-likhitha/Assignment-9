#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num;
    printf(" 1) Even number \n 2) Odd number\n\n");
    printf("Enter any of the above options: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Enter the even number: ");
                scanf("%d", &num);
                printf("The upper nearest odd number of %d is: %d", num, num+1);
                break;

        case 2: printf("Enter the odd number: ");
                scanf("%d", &num);
                printf("The upper nearest even number of %d is: %d", num, num+1);
                break;

        default: printf("Invalid number format!");
    }

    return 0;
}
