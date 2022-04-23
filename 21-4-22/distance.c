#include <stdio.h>

int main()
{
    printf("Enter KM:\n>");
    long int inp_dist;
    scanf("%li", &inp_dist);
    long long int dist_meters;
    dist_meters = inp_dist * 1000;
    printf("Meters: %lli\n", dist_meters);
    long long int dist_feet;
    dist_feet = inp_dist * 3280;
    printf("Feet: %lli\n", dist_feet);
    long long int dist_inches;
    dist_inches = inp_dist * 3280 * 12;
    printf("Inches: %lli\n", dist_inches);
    long long int dist_centimeters;
    dist_centimeters = inp_dist * 1000 * 100;
    printf("Centimeters: %lli\n", dist_centimeters);

    return 0;
}
