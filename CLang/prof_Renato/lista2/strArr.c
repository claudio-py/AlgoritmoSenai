#include <stdio.h>
#include <string.h>

int main() {
    char text[3][30]; // 3 strings, each up to 29 chars + null terminator

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d nome:\n", i + 1);
        fgets(text[i], sizeof(text[i]), stdin);

        // Remove trailing newline if present
        text[i][strcspn(text[i], "\n")] = '\0';
    }

    // Print all characters
    for (int i = 0; i < 3; i++) {
        printf("nome %d: ", i+1);
        int j = 0;
        while (text[i][j] != '\0') {
            printf("%c", text[i][j]);
            j++;
        }
        printf("\n"); // optional: add a newline after each name
    }

    return 0;
}
