#include <stdio.h>

int main() {
  char string[30];

  fgets(string, 30, stdin);

  printf("String: %s", string);
  return 0;
}