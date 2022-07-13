#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 20

typedef struct Book {
    char title[64];
    char author[64];
    int year;
    } book;

void print_menu() {
    printf("1. Add a book\n");
    printf("2. Display Book Information\n");
    printf("3. Print all books by a particular author\n");
    printf("Q. Exit\n");
    printf("Enter Choice:");
    }

void add_book(book books[MAX_LENGTH], int* num_books) {
    printf("Enter the title, author, and year of the book: ");
    scanf("%s %s %d", books[*num_books].title, books[*num_books].author, &books[*num_books].year);
    (*num_books)++;
    }

void print_books(book books[MAX_LENGTH], int num_books) {
    for (int i = 0; i < num_books; i++) {
        printf("%d-%s\n", i, books[i].title);
        }
    }

int main() {
    book books[MAX_LENGTH];
    int num_books = 0;
    char choice = '\0';
    while (choice != 'Q' && choice != 'q') {
        printf("[xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx]\n");
        printf("Number Of Registered Books: %d\n", num_books);
        print_books(books, num_books);
        print_menu();
        fflush(stdin);
        scanf(" %c", &choice);
        switch (choice) {
                case '1':
                    add_book(books, &num_books);
                    break;
                case '2':
                    printf("Enter Book Index: ");
                    int index;
                    scanf("%d", &index);
                    printf("Title: %s\n", books[index].title);
                    printf("Author: %s\n", books[index].author);
                    printf("Year: %d\n", books[index].year);
                    break;
                case '3':
                    printf("Enter Author: ");
                    char author[64];
                    scanf("%s", author);
                    for (int i = 0; i < num_books; i++) {
                        if (strcmp(books[i].author, author) == 0) {
                            printf("%s\n", books[i].title);
                            }
                        }
                    break;
                case 'Q':
                case 'q':
                    return 0;
                default:
                    printf("Invalid Input\n");
                    break;
            }
        }
    }