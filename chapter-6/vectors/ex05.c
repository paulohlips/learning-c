#include <stdio.h>

int main() {
  int vector[8], num, x, y;

  for (int i = 0; i <= 7; i++) {
    scanf("%d", &num);
    vector[i] = num;
  }

  scanf("%d %d", &x, &y);

  printf("%d", vector[x] + vector[y]);

  return 0;
}