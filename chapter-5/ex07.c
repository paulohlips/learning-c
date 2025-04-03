#include <stdio.h>

int main() {
  int qtd, num, sum = 0;

  while (qtd < 10) {
    scanf("%d", &num);
    sum += num;
    qtd++;
  }

  printf("%d \n", sum);
  return 0;
}