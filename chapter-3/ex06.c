#include <stdio.h>

int main() {
  float speed;
  scanf("%f", &speed);
  float speedInMetersPerSecond = speed/3.6;
  printf("%f \n", speedInMetersPerSecond);
  return 0;
}