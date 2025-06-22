#include <stdio.h>

 int main() { /* copy input to output*/
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      putchar('\r'); // Convert newline to carriage return
    }
    putchar(c); // Output the character
  }
	return 0;
}
