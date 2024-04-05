#include <stdio.h>

/*
This code shows how to get input.
Refer - E:\Coding\C\Input.txt
*/

int main()
{

    int a;
    printf("Enter no. \n");
    scanf("%d", &a);

    printf("Number is %d", a);
    return 0;

    /*
    Format-
    For integer   - [scanf("%d", &....);] Here, in the place of "...." we have to put the variable for whom we want a input value.
    For real no.  - [scanf("%f", &....);] Here, in the place of "...." we have to put the variable for whom we want a input value.
    For character - [scanf("%c", &....);] Here, in the place of "...." we have to put the variable for whom we want a input value.
    */
}