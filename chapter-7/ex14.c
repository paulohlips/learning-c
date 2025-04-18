#include <stdio.h>
#include <string.h>

int main() {
  char string[100];

  fgets(string, sizeof(string), stdin);

  // Remove o \n do final, se houver
  string[strcspn(string, "\n")] = '\0';

  for (int i = 0; i <= strlen(string) - 1; i++) {
    string[i] = string[i] + 3;
  }

  printf("\"%s\"", string);

  return 0;
}
