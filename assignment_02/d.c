#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Record {
    char name[64];
    int age;
    int num_test_matches;
    float average_runs;

    } record;

int compare_records(const void* a, const void* b) {
    record* r1 = (record*)a;
    record* r2 = (record*)b;
    float delta = r1->average_runs - r2->average_runs;
    if (delta > 0) return 1;
    else if (delta < 0) return -1;
    else return 0;
    }



int main() {
    record records[20];
    for (int i = 0; i < 20; i++) {
        printf("Enter name, age, number of test matches, and average runs of Cricketer %d: ", i + 1);
        scanf("%s %d %d %f", records[i].name, &records[i].age, &records[i].num_test_matches, &records[i].average_runs);
        }
    qsort(records, 20, sizeof(record), compare_records);
    for (int i = 0; i < 20; i++) {
        printf("%s %d %d %.2f\n", records[i].name, records[i].age, records[i].num_test_matches, records[i].average_runs);
        }
    }
