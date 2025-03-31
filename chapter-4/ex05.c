#include <math.h>
#include <stdio.h>

int main() {
  float num;

  scanf("%f", &num);

  if (num >= 0) {
    printf("Number: %f, Square Root: %f", num, sqrtf(num));
  } else {
    printf("Number shoud be positivo (greater than zero)");
  }
  return 0;
}