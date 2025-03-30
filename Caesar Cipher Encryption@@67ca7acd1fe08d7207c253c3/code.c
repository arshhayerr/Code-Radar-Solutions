#include <stdio.h>

// Function to encrypt using Caesar Cipher
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;

    while (message[i] != '\0') {
        char ch = message[i];

        // Shift uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Shift lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Leave non-alphabet characters unchanged
        else {
            encrypted[i] = ch;
        }

        i++;
    }

    // Null-terminate the encrypted string
    encrypted[i] = '\0';
}

// Driver code
int main() {
    char message[] = "Hello, World! 123";
    int shift = 3;
    char encrypted[100];

    caesarCipher(message, shift, encrypted);

    printf("Original Message: %s\n", message);
    printf("Encrypted Message: %s\n", encrypted);

    return 0;
}
