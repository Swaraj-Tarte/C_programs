#include <stdio.h>

// This code calculates perimeter of rectangle.

int main()
{
    float Length, Breadth;

    printf("Enter length of rectangle : \n");
    scanf("%f", &Length);

    printf("Enter breadth of rectangle : \n");
    scanf("%f", &Breadth);

    printf("Perimeter of rectangle is %f", 2 * (Length + Breadth));
    return 0;
}