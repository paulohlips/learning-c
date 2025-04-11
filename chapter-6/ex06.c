#include <stdio.h>

int main() {
  int vector[10], x = 0, num;

  for (int i = 0; i <= 2; i++) {
    scanf("%d", &num);
    vector[i] = num;
    if (num % 2 == 0) {
      x++;
    }
  }

  printf("%d", x);

  return 0;
}