#include <stdio.h>

int main() {
  int n, control = 1;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", control);
      control++;
    }
    printf("\n");
  }
  return 0;
}