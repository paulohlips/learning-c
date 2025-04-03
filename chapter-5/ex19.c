#include <stdio.h>

int main() {
  float s = 0;

  for (int i = 1; i <= 99; i++) {
    s += 1 + (2.0 * i + 1) / i;
  }
  printf("S = %f", s);
  return 0;
}