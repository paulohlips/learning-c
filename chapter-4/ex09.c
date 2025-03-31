#include <stdio.h>

int main() {
  float height, weight;

  scanf("%f %f", &height, &weight);

  if (height < 1.2) {
    if (weight <= 60) {
      printf("A");
    } else if (weight > 60 && weight <= 90) {
      printf("D");
    } else if (weight > 90) {
      printf("g");
    }
  } else if (height >= 1.2 && height < 1.7) {
    if (weight <= 60) {
      printf("B");
    } else if (weight > 60 && weight <= 90) {
      printf("E");
    } else if (weight > 90) {
      printf("H");
    }
  } else if (height > 1.7) {
    if (weight <= 60) {
      printf("C");
    } else if (weight > 60 && weight <= 90) {
      printf("F");
    } else if (weight > 90) {
      printf("I");
    }
  }
  return 0;
}