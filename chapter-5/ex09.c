#include <stdio.h>

int main() {
  int num, qtd = 0;

  // inicializando com o maior e o menor valor que um int pode assumir
  int smallest = 2147483647;
  int greatest = -2147483648;

  while (qtd <= 10) {
    scanf("%d", &num);
    if (num < smallest) {
      smallest = num;
    }
    if (num > greatest) {
      greatest = num;
    }
    qtd++;
  }

  printf("Smallest: %d and Greatest: %d\n", smallest, greatest);
  return 0;
}