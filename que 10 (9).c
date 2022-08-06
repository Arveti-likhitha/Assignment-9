#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n;
    int a, b, c, r1, r2, d;
    printf(" Quadratic equation is of the form: a(x)^2 + bx + c = 0 ");
    printf("\n");
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = (b*b) - (4*a*c);

    if(d == 0)
        n = 1;
    else if(d > 0)
        n = 2;
    else if(d < 0)
        n = 3;

    switch(n)
    {
        case 1: printf("The discriminant is zero, thus the above quadratic equation has 2 real roots which are equal.");
                r1 = -b / (2*a);
                r2 = -b / (2*a);
                printf("\n");
                printf("Thus, the roots of the above quadratic equation is: %d and %d", r1, r2);
                break;

        case 2: printf("The discriminant is greater than zero, thus the above quadratic equation has 2 real and distinct roots.");
                printf("\n");
                r1 = (-b + sqrt(d))/ (2*a);
                r2 = (-b - sqrt(d))/ (2*a);
                printf("Thus, the roots of the above quadratic equation are: %d and %d", r1, r2);
                break;

        case 3: printf("The discriminant is less than zero, thus the above quadratic equation has 2 imaginary and distinct roots.");
                break;
    }



    return 0;
}
