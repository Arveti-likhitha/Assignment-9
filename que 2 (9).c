#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    float a, b;
    printf(" 1) Addition\n 2) Subtraction\n 3) Multiplication\n 4) Division\n 5) Exit\n\n");
    printf("Select the operation you would like to perform based on the numbering: ");
    scanf("%d", &n);
    switch (n)
    {
        case 1: printf("Enter two numbers for addition: ");
                scanf("%f, %f", &a, &b);
                printf("The sum of %f and %f is: %f", a, b, a+b);
                break;

        case 2: printf("Enter two numbers for subtraction: ");
                scanf("%f, %f", &a, &b);
                printf("The difference of %f and %f is: %f", a, b, a-b);
                break;

        case 3: printf("Enter two numbers for multiplication: ");
                scanf("%f, %f", &a, &b);
                printf("The product of %f and %f is: %f", a, b, a*b);
                break;

        case 4: printf("Enter two numbers for division: ");
                scanf("%f, %f", &a, &b);
                printf("The division of %f and %f is: %f", a, b, a/b);
                break;

        case 5:printf("Exit");
                break;
    }


    return 0;
}
