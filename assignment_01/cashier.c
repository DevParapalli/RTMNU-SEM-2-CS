#include <stdio.h>

int main(int argc, char *argv[])
{
    int amount = 0, count_100 = 0, count_50 = 0, count_10 = 0;
    printf("Enter Amount: ");
    scanf("%d", &amount);
    while (amount >= 100)
    {
        amount -= 100;
        count_100++;
    }
    while (amount >= 50)
    {
        amount -= 50;
        count_50++;
    }
    while (amount >= 10)
    {
        amount -= 10;
        count_10++;
    }
    printf("%d 100s, %d 50s, %d 10s\n", count_100, count_50, count_10);
    return 0;
}

