#include <stdio.h>

int main(int argc, char *argv[]) {
    const float pc_males = 0.52, pc_total_literate = 0.48, pc_men_literate = 0.35;
    const long long int total_population = 8000000;
    long long int count_men = total_population * pc_males;
    long long int count_literate = total_population * pc_total_literate;
    long long int count_literate_men = total_population * pc_men_literate;
    long long int count_illiterate_men = total_population - count_literate_men;
    long long int count_women = total_population - count_men;
    long long int count_literate_women = count_literate - count_literate_men;
    long long int count_illiterate_women = count_women - count_literate_women;

    printf("Total Population: %lli\n", total_population);
    printf("Total Men: %lli\n", count_men);
    printf("Total Women: %lli\n", count_women);
    printf("Literate Men: %lli\n", count_literate_men);
    printf("Literate Women: %lli\n", count_literate_women);
    printf("Illiterate Men: %lli\n", count_illiterate_men);
    printf("Illiterate Women: %lli\n", count_illiterate_women);
    return 0;
}