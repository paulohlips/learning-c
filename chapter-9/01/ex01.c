#include <stdio.h>

int findGreatest(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int main() {
  int x, y;

  scanf("%d %d", &x, &y);

  printf("The greatest is %d", findGreatest(x, y));
  return 0;
}