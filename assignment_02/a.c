#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student {
    int roll_number;
    int year_of_joining;
    char name[50];
    char department[50];
    char course[50];
} student;

void print_name_on_yoj(student s[451], int yoj, int num_students) {
    int i;
    for (i = 0; i < num_students; i++){
        if (s[i].year_of_joining == yoj){
            printf("%s\n", s[i].name);
        }
    }
}

void print_data_on_roll_number(student s[451], int roll_number, int num_students) {
    int i;
    for (i = 0; i < num_students; i++){
        if (s[i].roll_number == roll_number){
            printf("Name:         %s\n", s[i].name);
            printf("Department:   %s\n", s[i].department);
            printf("Course:       %s\n", s[i].course);
            printf("Year Of Join: %d\n", s[i].year_of_joining);
            return;
        }
    }
    printf("Student not found\n");
}


int main() {
    student students[451];
    int number_of_students = 0;
    printf("Enter the number of students: ");
    scanf("%d", &number_of_students);
    for (int i = 0; i < number_of_students; i++) {
        /* Can be replaced with reading a file or something... */
        printf("Enter the roll number, year of joining, name, department, and course of student %d: ", i + 1);
        scanf("%d %d %s %s %s", &students[i].roll_number, &students[i].year_of_joining, students[i].name, students[i].department, students[i].course);
    }
    int yoj;
    printf("Enter the year of joining: ");
    scanf("%d", &yoj);
    print_name_on_yoj(students, yoj, number_of_students);
    int roll_number;
    printf("Enter the roll number: ");
    scanf("%d", &roll_number);
    print_data_on_roll_number(students, roll_number, number_of_students);
    return 0;
}