#include <stdio.h>
#include <string.h>

int main() {
  char string1[30], string2[30];

  fgets(string1, 30, stdin);
  // Remove o caractere de nova linha '\n' se presente no ultimo elemento da
  // string e susbtitui por \0 para simbolizar o final da string Ex:  [o,v,o,\n]
  size_t stringLength = strlen(string1);
  if (string1[stringLength - 1] == '\n') {
    string1[stringLength - 1] = '\0';
    stringLength--;
  }

  for (int i = 0; i < stringLength; i++) {
    string2[stringLength - i - 1] = string1[i];
  }

  // Verificação
  if (strcmp(string1, string2) == 0) {
    printf("É palíndromo!\n");
  } else {
    printf("Não é palíndromo.\n");
  }

  return 0;
}