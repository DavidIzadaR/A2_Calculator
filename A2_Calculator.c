// A2_Calculator.c
//

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int i = 0;
    char s[16] = {0};

    while (1)
    {
        printf("Enter a statement: ");
        i = scanf("%d %s %d", (int*) & a, (char*)&s[0], (int*) & b);
        if (i != 3)
        {
            printf("Please, correct your statement...");
            continue;
        }

        printf("The answer is: ");
        switch (s[0]) 
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
            break;
        default:
            printf("What is %s?\n", s);
            break;
        }
    }
}
