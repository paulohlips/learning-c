#include <stdio.h>

int main() {
  int control = 0;
  int i = 1;

  while (control < 5) {
    if (i % 3 == 0) {
      printf("%d \n", i);
      control++;
    }
    i++;
  }
  return 0;
}