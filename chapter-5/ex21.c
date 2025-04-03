#include <stdio.h>

int main() {
  int qtd, num, counter;
  int greatest = -2147483648;

  scanf("%d", &qtd);

  for (int i = 1; i <= qtd; i++) {
    scanf("%d", &num);

    if (num >= greatest) {
      if (num == greatest) {
        counter++;
      } else {
        counter = 1;
        greatest = num;
      }
    }
  }

  printf("Greatest: %d, frequency: %d", greatest, counter);
  return 0;
}