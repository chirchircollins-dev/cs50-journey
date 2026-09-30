#include <stdio.h>
 int main(void)
 {
    int numb_a;
    int numb_b;

    printf("Input the first number");
    scanf("%d", &numb_a);
    printf("Input the second number");
    scanf("%d", &numb_b);

    char user_operation;
    printf("Operations, +, -, *, /");
    printf("input the operation ");
    scanf( " %c", &user_operation);

    if (user_operation == '+')
    {
        printf("Result: %d\n", numb_a + numb_b);
    }
    else if (user_operation == '-')
    {
        printf("Result: %d\n", numb_a - numb_b);
    }
    else if (user_operation == '*')
    {
        printf("Result: %d\n", numb_a * numb_b);
    }
    else if (user_operation == '/')
    {
        printf("Result: %.2f\n", (float)numb_a / (float)numb_b);
    }
    else
    {
        printf("invalid operation");
    }
    return 0;


    



    

 }

