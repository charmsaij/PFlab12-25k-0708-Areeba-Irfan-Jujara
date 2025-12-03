#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindromeRecursive(const char *str, int start, int end) {
    
    if (start >= end) {
        return 1;
    }

    
    char startChar = tolower(str[start]);
    char endChar = tolower(str[end]);

    
    if (startChar != endChar) {
        return 0;
    }

    
    return isPalindromeRecursive(str, start + 1, end - 1);
}

int main() {
    char user_input[100]; 
    int result;

    printf("--- Recursive Palindrome Check ---\n");
    printf("Enter a string (no spaces allowed for this simple input method): ");
    
    
    if (scanf("%s", user_input) != 1) {
        printf("Error reading input.\n");
        return 1;
    }
    
    
    int len = strlen(user_input);

    
    result = isPalindromeRecursive(user_input, 0, len - 1);

    printf("\nString: \"%s\"\n", user_input);
    printf("Result: %d\n", result);
    printf("Conclusion: The string is %s.\n", 
           result ? "a palindrome (reads the same forwards and backwards)" : "NOT a palindrome");

    return 0;
}
