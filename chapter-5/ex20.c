#include <stdio.h>

int main() {
  float n, E = 0;
  int d = 1;

  scanf("%f", &n);

  for (int i = 1; i <= n; i++) {
    d = 1;
    for (int j = 1; j <= i; j++) {
      d *= j;
      printf("%d  ", d);
    }
    printf("\n");
    E += 1.0 / d;
  }
  printf("\n\n E = %f \n", E);
  return 0;
}