#include <stdint.h>
#include <stdio.h>

#define YES 1
#define NO 0

int main() { /*count lines, words, chars */
  int c, nl, nw, nc, inword;
  inword = NO;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nc;

    if (c == ' ' || c == '\n' || c == '\t')
      inword = NO;

    if (inword == NO) {
      inword = YES;
      ++nw;
    }
  }
  printf("lines :%d\n words: %d\n chars: %d\n", nl, nw, nc);
  return 0;
}
