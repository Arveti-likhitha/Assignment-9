#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the day number from 1 - 7: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Message of the day: Love yourself!");
                break;

        case 2: printf("Message of the day: Give respect and take respect.");
                break;

        case 3: printf("Message of the day: Making mistakes is better than faking perfection.");
                break;

        case 4: printf("Message of the day: Failure is the first step of success.");
                break;

        case 5: printf("Message of the day: Never give up!");
                break;

        case 6: printf("Message of the day: Don't handover the paint brush of your life to someone else.");
                break;

        case 7: printf("Message of the day: Don't fall for the outer beauty, because the real beauty lies inside.");
                break;
    }

    return 0;
}
