#include <stdio.h>

int main() {
  char string[30];
  int stringLength = 0, i = 0;

  fgets(string, 30, stdin);

  while (string[i] != '\0') {
    stringLength++;
    i++;
  }

  // stringLength - 2 porque estou descontando o enter e o fim da string que são
  // contabilizados no tamanho total da string
  for (int i = stringLength - 2; i >= 0; i--) {
    printf("[%d]: %c\n", i, string[i]);
  }
  return 0;
}