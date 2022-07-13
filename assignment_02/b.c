#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 50

typedef struct Account {
    int account_number;
    char name[64];
    float balance;
    } account;

void print_account_on_less_than_100_bal(account a[MAX_LENGTH], int num_accounts) {
    int i;
    for (i = 0; i < num_accounts; i++) {
        if (a[i].balance < 100) {
            printf("Account number: %d\n", a[i].account_number);
            printf("Name: %s\n", a[i].name);
            printf("Balance: %.2f\n", a[i].balance);
            printf("\n");
            }
        }
    }

void do_transaction(account a[MAX_LENGTH], int num_acc, int acc_num, int amount, int code) {
    for (int i = 0; i < num_acc; i++) {
        if (a[i].account_number == acc_num) {
            switch (code) {
                    case 1:
                        a[i].balance += amount;
                        break;
                    case 0:
                        if (a[i].balance >= amount) a[i].balance -= amount;
                        else printf("Insufficient balance.\n");
                        break;
                    default:
                        printf("Invalid code\n");
                }
            }
        }



    }



int main() {
    account accounts[MAX_LENGTH];
    int number_of_accounts = 0;
    printf("Enter the number of accounts: ");
    scanf("%d", &number_of_accounts);
    for (int i = 0; i < number_of_accounts; i++) {
        /* Can be replaced with reading a file or something... */
        printf("Enter the account number, name, and balance of account %d: ", i + 1);
        scanf("%d %s %f", &accounts[i].account_number, accounts[i].name, &accounts[i].balance);
        }
    int num_transactions;
    printf("Enter Number of Transactions: ");
    scanf("%d", &num_transactions);
    for (int i = 0; i < num_transactions; i++) {
        int acc_num, amount, code;
        printf("Code 1 for deposit and 0 for withdraw");
        printf("Enter the account number, amount, and code of transaction %d: ", i + 1);
        scanf("%d %d %d", &acc_num, &amount, &code);
        do_transaction(accounts, number_of_accounts, acc_num, amount, code);
        }
    printf("Accounts Less than 100 Balance:\n");
    print_account_on_less_than_100_bal(accounts, number_of_accounts);
    return 0;
    }