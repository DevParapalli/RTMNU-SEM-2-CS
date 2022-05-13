#include <stdio.h>

int main() {
  for (int counter = 0; counter < 10; counter++) {
    int ot_hrs = 0;
    printf("Enter Overtime Hours for Employee %d >", counter + 1);
    scanf("%d", &ot_hrs);
    printf("Overtime Pay for Employee %d is : ₹%d\n", counter + 1,
           ot_hrs * 1200);
  }
}

/*
Enter Overtime Hours for Employee 1 >1
Overtime Pay for Employee 1 is : ₹1200
Enter Overtime Hours for Employee 2 >2
Overtime Pay for Employee 2 is : ₹2400
Enter Overtime Hours for Employee 3 >3
Overtime Pay for Employee 3 is : ₹3600
Enter Overtime Hours for Employee 4 >4
Overtime Pay for Employee 4 is : ₹4800
Enter Overtime Hours for Employee 5 >5
Overtime Pay for Employee 5 is : ₹6000
Enter Overtime Hours for Employee 6 >6
Overtime Pay for Employee 6 is : ₹7200
Enter Overtime Hours for Employee 7 >7
Overtime Pay for Employee 7 is : ₹8400
Enter Overtime Hours for Employee 8 >8
Overtime Pay for Employee 8 is : ₹9600
Enter Overtime Hours for Employee 9 >9
Overtime Pay for Employee 9 is : ₹10800
Enter Overtime Hours for Employee 10 >0
Overtime Pay for Employee 10 is : ₹0
*/