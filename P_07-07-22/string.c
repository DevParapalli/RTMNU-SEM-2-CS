#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str_a[100], str_b[100];

    // Ask User to Input String
    printf("Enter the first string: ");
    fgets(str_a, sizeof(str_a), stdin);
    printf("Length of Input String: %d\n", strlen(str_a) - 1); // -1 to account for NULL
    int trunc_len = 0;
    printf("How many characters do you want to truncate: ");
    scanf("%d", &trunc_len);
    ++trunc_len; // Increment by 1 to account for the null character
    // Truncate String and copy into str_b // truncate_str
    int new_str_len = strlen(str_a) - trunc_len; // strlen()
    strncpy(str_b, str_a, new_str_len); // strncpy()
    str_b[new_str_len] = '\0';
    
    // Print String
    printf("The truncated string is: %s\n", str_b);
    printf("The length of the truncated string is: %d\n", strlen(str_b));
    printf("The reverse of the truncated string is: %s\n", strrev(str_b)); // strrev()
    return 0;
}