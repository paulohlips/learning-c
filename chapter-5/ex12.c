#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int sum = -x;
  for (int i = 1; i <= x; i++) {
    if (x < 0) {
      break;
    }

    if (x % i == 0) {
      sum += i;
    }
  }
  printf("%d \n", sum);
  return 0;
}