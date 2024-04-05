#include <stdio.h>

// This code calculates the area of a square.

int main()
{
    float side;

    printf("Enter side of the square : \n");
    scanf("%f", &side);

    printf("Area of the square is %f", side * side);
    return 0;
}