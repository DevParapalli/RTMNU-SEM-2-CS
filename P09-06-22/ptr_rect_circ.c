#include <stdio.h>

#define math_pi 3.14159

void rect(float length, float breadth, float * area, float * perimeter) {
    *area = length * breadth;
    *perimeter = 2 * (length + breadth);
}

void circ(float radius, float * area, float * perimeter) {
    *area = math_pi * radius * radius;
    *perimeter = 2 * math_pi * radius;
}

int main() {
    float rect_length, rect_breadth, rect_area = 0, rect_perimeter = 0;
    float circ_radius, circ_area, circ_circumference;
    printf("Enter Radius, Length, Breadth >");
    scanf("%f,%f,%f", &circ_radius, &rect_length, &rect_breadth);
    rect(rect_length, rect_breadth, &rect_area, &rect_perimeter);
    circ(circ_radius, &circ_area, &circ_circumference);
    printf("[Rectangle] Area = %.2f, Perimeter = %.2f\n", rect_area, rect_perimeter);
    printf("[Circle] Area = %.2f, Circumference = %.2f\n", circ_area, circ_circumference);
    return 0;
}