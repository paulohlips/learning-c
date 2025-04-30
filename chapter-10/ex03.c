#include <stdio.h>

int main() {
  float vector[10];

  for (int i = 0; i < 10; i++) {
    printf("%p\n", &vector[i]);
  }

  return 0;
}