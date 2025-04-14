#include <stdio.h>

int main() {
  int vector[10], num;
  // inicializando com o maior e o menor valor que um int pode assumir
  int smallest = 2147483647;
  int greatest = -2147483648;

  for (int i = 0; i <= 9; i++) {
    scanf("%d", &num);
    vector[i] = num;
    if (num < smallest)
      smallest = num;
    if (num > greatest)
      greatest = num;
  }

  printf("Greatest: %d, Smallest: %d", greatest, smallest);
  return 0;
}