#include <stdio.h>
#include <ctype.h>

void checkCharacter(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if it is a letter
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (ch >= '0' && ch <= '9') { // Check if it is a digit
        printf("Digit");
    } else { // If it's neither a letter nor a digit, it's a special character
        printf("Special Character");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
    
    checkCharacter(ch);
    
    return 0;
}
