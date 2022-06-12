#include <stdio.h>

int main(int argc, char *argv[]) {
    const float pc_males = 0.52, pc_total_literate = 0.48, pc_men_literate = 0.35;
    const long long int total_population = 8000000;
    long long int count_literate = total_population * pc_total_literate;
    long long int count_illiterate_men = total_population - total_population * pc_men_literate;
    long long int count_illiterate_women = total_population - total_population * pc_males - count_literate - total_population * pc_men_literate;

    printf("Illiterate Men: %lli\n", count_illiterate_men);
    printf("Illiterate Women: %lli\n", count_illiterate_women);
    return 0;
}