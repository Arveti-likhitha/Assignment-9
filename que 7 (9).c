#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf(" 1) <= 50 units\n 2) <= 150 units\n 3) <=250 units\n 4) >250 units\n\n");
    printf("Enter the amount of units used based on the above numbering: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Total electricity bills is: Rs. 0.50 / unit and a surcharge of Rs. 0.2");
                break;

        case 2: printf("Total electricity bills is: Rs. 0.75 / unit and a surcharge of Rs. 0.2");
                break;

        case 3: printf("Total electricity bills is: Rs. 1.20 / unit and a surcharge of Rs. 0.2");
                break;

        case 4: printf("Total electricity bills is: Rs. 1.50 / unit and a surcharge of Rs. 0.2");
                break;
    }


    return 0;
}
