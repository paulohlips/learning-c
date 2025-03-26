#include <stdio.h>

int main() {
  float value = 780000;
  float top1 = value*0.46;
  float top2 = value*0.32;
  float top3 = value - top1 - top2;
  printf("Top 1: %f, \nTop 2: %f, \nTop 3: %f, \n", top1, top2, top3);
  return 0;
}