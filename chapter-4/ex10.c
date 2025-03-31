#include <stdio.h>

int main() {
  int x, y, z, operation;

  scanf("%d %d %d %d", &x, &y, &z, &operation);

  switch (operation) {
  case 1:
    printf("%d", x * y * z);
    break;
  case 2:
    printf("%d", (x + 2 * y + 3 * z) / 6);
    break;
  case 3:
    printf("%d", 1 / ((1 / x) + (1 / y) + (1 / z)));
    break;
  case 4:
    printf("%d", (x + y + z) / 3);
    break;
  default:
    printf("Wrong operation!");
  }
  return 0;
}