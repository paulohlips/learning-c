#include <stdio.h>

int main() {
  int vector[10], result[] = {}, x;

  for (int i = 0; i <= 9; i++) {
    scanf("%d", &x);
    vector[i] = x;
  }

  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      if (i != j && vector[i] == vector[j]) {
        printf("%d", vector[i]);
      }
    }
  }

  return 0;
}