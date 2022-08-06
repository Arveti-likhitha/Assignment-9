#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    char ch, p, q, r;
    printf(" a) Isosceles triangle\n b) Right - angled triangle\n c) Equivalent triangle\n d) Exit\n\n");
    printf("Enter the any one of the three characters above of whose condition you want to check: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': printf("Enter three sides of the triangle: ");
                  scanf("%d %d %d", &p, &q, &r);
                  if("(p == q) || (q == r) || (p ==r)")
                    printf("The entered sides forms an isosceles triangle.");
                  else
                    printf("The entered sides do not form an isosceles triangle.");

                  break;


        case 'b': printf("Enter three sides of the triangle: ");
                  scanf("%d %d %d", &p, &q, &r);
                  if("(sqrt(p) + sqrt(q) == sqrt(r) || (sqrt(q) + sqrt(r) == sqrt(p)) || (sqrt(p) + sqrt(r) == sqrt(q))")
                    printf("The entered sides forms a right - angeled triangle.");
                  else
                    printf("The entered sides do not form a right - angeled triangle.");

                  break;


        case 'c': printf("Enter three sides of the triangle: ");
                  scanf("%d %d %d", &p, &q, &r);
                  if("p == q == r")
                    printf("The entered sides forms an equilateral triangle.");
                  else
                    printf("The entered sides do not form an equilateral triangle.");

                  break;


        case 'd': printf("Exit");
                  break;
    }


    return 0;
}
