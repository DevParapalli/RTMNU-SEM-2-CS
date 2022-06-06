#include <stdio.h>

int main()
{
    float area, perimeter, length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of the rectangle is %.2f and the perimeter is %.2f\n", area, perimeter);
    if (area > perimeter)
        printf("The area is greater than the perimeter\n");
    else if (area < perimeter)
        printf("The area is less than the perimeter\n");
    else
        printf("The area is equal to the perimeter\n");
    return 0;
}