#include <stdio.h>

/*
This code shows how to get output.
Refer - E:\Coding\C\Output.txt
*/

int main()
{

    int age = 22;
    char star = '*';
    float pi = 3.14;
    // Here printf is used for printing a value
    printf("My data \n");
    printf("Age is %d \n", age);
    printf("Star is %c \n", star);
    printf("Pi is %f \n", pi);
    // Here \n is used for printing next line on new

    /*
    To print a variables value in output we have to use different code as follows :
    For integers    - [printf("%d", ....);] Here, '....' should replaced by the variable name whose value we have to print in output.
    For real nos.   - [printf("%f", ....);] Here, '....' should replaced by the variable name whose value we have to print in output.
    For characters  - [printf("%c", ....);] Here, '....' should replaced by the variable name whose value we have to print in output.
    */
    return 0;
}