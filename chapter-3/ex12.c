#include <stdio.h>

int main() {
  float radius, heigth;
  scanf("%f %f", &radius, &heigth);
  float volume = 3.141592 * radius * radius * heigth;
  printf("%f \n", volume);
  return 0;
}