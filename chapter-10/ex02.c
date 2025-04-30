#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  int *addressX = &x, *addressY = &y;

  if (addressX > addressY) {
    printf("addressX (%d) is greatest", *addressX);
  } else {
    printf("addressY (%d) is greatest", *addressY);
  }
  return 0;
}