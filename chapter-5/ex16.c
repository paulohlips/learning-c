#include <stdio.h>

int main() {
  int hn;
  float sum = 0;

  scanf("%d", &hn);

  for (int i = 1; i <= hn; i++) {
    sum += 1.0 / i;
  }
  printf("Hn(%d) = %f", hn, sum);
  return 0;
}