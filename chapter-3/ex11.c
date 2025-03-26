#include <stdio.h>

int main() {
  float radius;
  scanf("%f", &radius);
  float circleArea = 3.141592 * radius * radius;
  printf("%f \n", circleArea);
  return 0;
}