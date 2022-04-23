#include <stdio.h>

int main()
{
    float temp_f;
    printf("Enter Temp. in F:");
    scanf("%f", &temp_f);
    float temp_c = (temp_f - 32) * 5 / 9;
    printf("Temp in C: %f\n", temp_c);
    return 0;
}
