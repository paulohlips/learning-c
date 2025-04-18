#include <stdio.h>
#include <string.h>

int main() {
  char string1[100];

  fgets(string1, sizeof(string1), stdin);

  // Remove o \n do final, se houver
  string1[strcspn(string1, "\n")] = '\0';

  for (int i = 0; i <= strlen(string1) - 1; i++) {
    string1[i] = string1[i] + 32;
  }

  printf("\"%s\"", string1);

  return 0;
}
