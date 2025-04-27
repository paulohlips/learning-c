#include <stdio.h>

int nSum(int x) {
  int control = 0, result = 0;

  while (control <= x) {
    result += control;
    control++;
  }
  return result;
}

int main() {
  int x;

  scanf("%d", &x);

  printf("N sum is %d \n", nSum(x));
  return 0;
}