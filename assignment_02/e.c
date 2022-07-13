#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

typedef struct Employee {
    int employee_code;
    char name[50];
    struct Date date_of_joining;
} employee;

long int get_approx_days_from_struct_Date(struct Date d) {
    long int days = d.year * 365 + d.month * 30 + d.day;
    return days;
}


int main() {
    employee employees[20];
    int number_of_employees = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &number_of_employees);

    for (int i = 0; i < number_of_employees; i++) {
        printf("Enter employee code, name, and date of joining of employee %d: ", i + 1);
        scanf("%d %s %d/%d/%d", &employees[i].employee_code, employees[i].name, &employees[i].date_of_joining.day, &employees[i].date_of_joining.month, &employees[i].date_of_joining.year);
    }
    struct Date current_date;
    printf("Enter current date: ");
    scanf("%d/%d/%d", &current_date.day, &current_date.month, &current_date.year);
    

    printf("Employees with Tenure more than 3 years: \n");
    for(int i = 0; i < number_of_employees; i++) {
        if(get_approx_days_from_struct_Date(current_date) - get_approx_days_from_struct_Date(employees[i].date_of_joining) > 3*365) {
            printf("%s\n", employees[i].name);
        }
    }
}