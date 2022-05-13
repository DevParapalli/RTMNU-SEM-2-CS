#include <stdio.h>
#define PI 3.14159

int main() {
    float length, breadth, radius;
    printf("Enter Length, Breadth\n>");
    scanf("%f,%f", &length, &breadth);
    printf("Enter Radius\n>");
    scanf("%f", &radius);
    printf("[Rectangle] Area = %f ; Perimeter = %f\n", length*breadth, 2*(length+breadth));
    printf("[Circle] Area = %f ; Perimeter = %f\n", PI*radius*radius, 2*PI*radius);
    return 0;
}