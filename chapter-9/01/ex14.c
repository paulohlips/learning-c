#include <stdio.h>

int fatorial(int x) {
  int result = 1;

  if (x == 1 || x == 0) {
    return 1;
  }
  return x * fatorial(x - 1);
}

int main() {
  int x;

  scanf("%d", &x);

  printf("factorial(%d) is %d \n", x, fatorial(x));
  return 0;
}