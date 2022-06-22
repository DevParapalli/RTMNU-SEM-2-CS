#include <stdio.h> 

void main() {
    int class = 0, failed = 0, grace_multiplier = 0;
    printf("Enter Class, Failed Subjects >");
    scanf("%d,%d", &class, &failed);

    switch (class) {
    case 1:
        switch (failed > 3) {
            case 1:
                grace_multiplier = 0;
                break;
            case 0:
                grace_multiplier = 5;
                break;
        }
        break;
    case 2:
        switch(failed > 2) {
            case 1: 
                grace_multiplier = 0;
                break;
            case 0:
                grace_multiplier = 4;
                break;
        }
        break;
    case 3:
        switch(failed > 1) {
            case 1:
                grace_multiplier = 0;
                break;
            case 0:
                grace_multiplier = 5;
                break;
        }
        break;
    }
    printf("Grace Mark Awarded : %d\n", failed * grace_multiplier);
}

/*
Enter Class, Failed Subjects >2, 1
Grace Mark Awarded : 4
*/