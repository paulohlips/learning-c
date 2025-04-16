#include <stdio.h>

int main() {
  char string[30];

  fgets(string, 30, stdin);

  for (int i = 0; i < 4; i++) {
    printf("[%d] - %c \n", i, string[i]);
  }
  return 0;
}