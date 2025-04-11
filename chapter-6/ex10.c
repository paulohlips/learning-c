#include <stdio.h>

int main() {
  int array[100], counter, num = 0;

  while (counter < 100) {
    if (num % 7 != 0) {
      array[counter] = num;
      counter++;
    }
    num++;
  }

  for (int i = 0; i <= 99; i++) {
    printf("[%d] - %d \n", i, array[i]);
  }

  return 0;
}