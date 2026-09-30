#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    printf("Please Enter name: ");
    scanf("%s", name);
    printf("Please Enter Age: ");
    scanf("%d", &age);

    printf("Hello! Your name is %s and your age is %d\n", name, age);
    return 0;






}

/*
If variable holds a VALUE   → give scanf its address with &
If variable holds an ADDRESS → give scanf the variable directly
*/