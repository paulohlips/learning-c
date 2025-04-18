#include <stdio.h>
#include <string.h>

int main() {
  char string1[100], string2[100];

  fgets(string1, sizeof(string1), stdin);
  fgets(string2, sizeof(string2), stdin);

  // Jeito mais fácim para remover o \n de cada string, se houver
  string1[strcspn(string1, "\n")] = '\0';
  string2[strcspn(string2, "\n")] = '\0';

  int result = strcmp(string1, string2);

  if (result == 0) {
    printf("%s\n%s\n", string1, string2);
  } else if (result < 0) {
    printf("%s\n%s\n", string1, string2);
  } else {
    printf("%s\n%s\n", string2, string1);
  }

  return 0;
}
