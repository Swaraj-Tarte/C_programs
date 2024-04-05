#include <stdio.h>

/*
This code is made using the concepts of variables, data types, constants, output and input.
Refer - E:\Coding\C\Hello_World.c
        E:\Coding\C\Variables,Data_Types&Constants.c
        E:\Coding\C\INPUT.C
        E:\Coding\C\OUTPUT.c
*/

int main()
{
    // Here you can enter as many variables like a, b for increasing the numbers present in operation.
    int a, b;

    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b : \n");
    scanf("%d", &b);

    printf("Sum is %d", a + b);
    return 0;
}