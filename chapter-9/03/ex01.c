#include <stdio.h>

int calcCubes(int x) {
  if (x == 1 || x == 0) {
    return 1;
  }

  return x * x * x + calcCubes(x - 1);
}

int main() {
  int x;

  scanf("%d", &x);

  printf("%d", calcCubes(x));
  return 0;
}