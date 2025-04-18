#include <stdio.h>
#include <string.h>

int main() {
  char string[100];
  int i, j;

  fgets(string, sizeof(string), stdin);
  scanf("%d %d", &i, &j);

  for (int index = 0; index <= strlen(string); index++) {
    if (index >= i && index <= j) {
      printf("%c", string[index]);
    }
  }

  return 0;
}
