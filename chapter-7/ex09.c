#include <stdio.h>
#include <string.h>

int main() {
  char string1[100], string2[100];
  int count = 0;

  fgets(string1, sizeof(string1), stdin);
  fgets(string2, sizeof(string2), stdin);

  // Remove o \n do final, se houver
  string1[strcspn(string1, "\n")] = '\0';
  string2[strcspn(string2, "\n")] = '\0';

  // Percorre string1 procurando por ocorrências de string2 comparando pedacos
  // da string 1 com o mesmo tamanho da string 2
  for (int i = 0; i <= strlen(string1) - strlen(string2); i++) {
    if (strncmp(&string1[i], string2, strlen(string2)) == 0) {
      count++;
    }
  }

  printf("A string \"%s\" aparece %d vez(es) na string \"%s\".\n", string2,
         count, string1);

  return 0;
}
