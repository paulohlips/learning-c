#include <stdio.h>

int main() {
  int x, y;

  scanf("%d %d", &x, &y);

  if (x > y) {
    printf("%d is the greatest", x);
  } else {
    printf("%d is the greatest", y);
  }
  return 0;
}