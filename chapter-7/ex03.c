#include <stdio.h>

int main() {
  char string[30];
  int counter = 0, i = 0;

  fgets(string, 30, stdin);

  while (string[i] != '\0') {
    counter++;
    printf("%d - %c \n", counter, string[i]);
    i++;
  }
  printf("String length: %d\n", counter - 1);
  return 0;
}