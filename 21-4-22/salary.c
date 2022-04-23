#include <stdio.h>

int main()
{
    long int salary;
    printf("Salary: \n>");
    scanf("%li", &salary);
    long int d_allow = salary * 0.4;
    long int r_allow = salary * 0.2;
    long int g_salary = salary + d_allow + r_allow;
    printf("Gross Salary: %li\n", g_salary);
    return 0;
}
