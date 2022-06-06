#include <stdio.h>

int main(int argc, char *argv[])
{
    int matches = 23;
    int user_pick, computer_pick;
    while (matches > 0)
    {
        printf("Matches Remaining %d\n", matches);
        printf("[Your Turn] Enter Pick (1, 2, 3, 4): >");
        scanf("%d", &user_pick);
        matches -= user_pick;
        if (matches <= 0)
        {
            printf("You Lose!\n");
            break;
        }
        computer_pick = 4;
        if (matches == 4) computer_pick = 3;
        else if (matches == 3) computer_pick = 2;
        else if (matches == 2) computer_pick = 1;
        else if (matches % 2 == 0) computer_pick = 3;
        
        printf("[Computer's Turn] Computer Picked %d", computer_pick);
        matches -= computer_pick;
        if (matches <= 0)
        {
            printf("You Win!\n");
            break;
        }
    }
    return 0;
}