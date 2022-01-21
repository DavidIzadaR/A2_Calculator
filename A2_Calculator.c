// A2_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
