#include <stdio.h>

int main() {
  FILE *file;
  char ch;

  // Open the file in read mode
  file = fopen("example.txt", "r");
  if (file == NULL) {
    printf("Could not open file example.txt\n");
    return 1;
  }

  // Read and print each character until end of file
  while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
  }

  // Close the file
  fclose(file);

  return 0;
}
