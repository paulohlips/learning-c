#include <stdio.h>
#include <string.h>

int main() {
  char string[30], result[30];

  fgets(string, 30, stdin);

  // subtraindo 1 para descontar o caracter "Enter"
  int stringLength = strlen(string) - 1;

  for (int i = stringLength; i >= 0; i--) {
    result[stringLength - i] = string[i];
  }

  strcpy(string, result);

  printf("%s", string);
  return 0;
}