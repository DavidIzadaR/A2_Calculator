// A2_Calculator.c
//

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int i = 0;
    char c = '?';

    while (1)
    {
        printf("Enter a statement: ");
        i = scanf("%d %c %d", & a, &c, & b);
        if (i != 3)
        {
            printf("Please, correct your statement...");
            continue;
        }

        printf("The answer is: ");
        switch (c) 
        {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            printf("\nQuotient : %d / %d = %d\n", a, b, a / b);
            printf("Remainder: %d / %d = %d\n", a, b, a % b);
            printf("Floating point result = %f\n", (float)a / b);
            break;
        default:
            printf("Unknown operator %c?\n", c);
            break;
        }
    }
}
