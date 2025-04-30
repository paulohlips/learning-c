#include <stdio.h>

int main() {
  int x = 1, y = 2;
  int *addressX = &x, *addressY = &y;

  if (*addressX > *addressY) {
    printf("addressX (%p) > adressY(%p)", addressX, addressY);
  } else {
    printf("addressY (%p) > adressX(%p)", addressY, addressX);
  }
  return 0;
}