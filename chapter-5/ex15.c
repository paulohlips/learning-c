#include <stdio.h>

int main() {
  int num;

  // inicializando com o maior e o menor valor que um int pode assumir
  int smallest = 2147483647;
  int greatest = -2147483648;

  while (num >= 0) {
    scanf("%d", &num);
    if (num < smallest && num >= 0) {
      smallest = num;
    }

    if (num > greatest) {
      greatest = num;
    }
  }

  printf("Greatest: %d, Smallest: %d \n", greatest, smallest);
  return 0;
}