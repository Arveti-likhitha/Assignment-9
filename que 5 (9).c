#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf(" 1) Good\n 2) Better\n 3) Best\n 4) -\n\n");
    printf("Select any of the above number to display the same: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Good");
                break;

        case 2: printf("Better");
                break;

        case 3: printf("Best");
                break;

        case 4: printf("Invalid!");
                break;

    }


    return 0;
}
