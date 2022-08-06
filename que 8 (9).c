#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num;
    printf(" 1) positive number\n 2) negative number\n\n");
    printf("Choose one of the above option: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Enter the number: ");
                scanf("%d", &num);
                printf("The negative number format of %d is %d", num, -num);
                break;

        case 2: printf("Enter the number: ");
                scanf("%d", &num);
                printf("The positive number format of %d is %d", num, abs(num));
                break;

        default: printf("Invalid number format!");
    }


    return 0;
}
