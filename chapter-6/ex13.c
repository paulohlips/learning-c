#include <stdio.h>

int main() {
  int vector[3], x, index = 0;

  for (int i = 0; index <= 2; i++) {
    scanf("%d", &x);
    int isRepeated = 0;
    for (int j = 0; j <= i; j++) {
      if (vector[j] == x) {
        printf("Número repetido, digite um número diferente \n");
        isRepeated = 1;
      }
    }

    if (isRepeated == 0) {
      vector[index] = x;
      index++;
    }
  }

  for (int i = 0; i <= 2; i++) {
    printf("%d ", vector[i]);
  }

  return 0;
}