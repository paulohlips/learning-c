#include <stdio.h>
#define mg "MG";

int main() {
  float orderValue;
  char stateChar1, stateChar2;

  printf("Type the order value: \n");
  scanf(" %f", &orderValue);

  printf("Type the stete (Ex: MG): \n");
  scanf(" %c%c", &stateChar1, &stateChar2);

  if (stateChar1 == 'M' && stateChar2 == 'G') {
    printf("%f", orderValue * 1.07);
  } else if (stateChar1 == 'S' && stateChar2 == 'P') {
    printf("%f", orderValue * 1.12);
  } else if (stateChar1 == 'R' && stateChar2 == 'J') {
    printf("%f", orderValue * 1.15);
  } else if (stateChar1 == 'M' && stateChar2 == 'S') {
    printf("%f", orderValue * 1.08);
  } else {
    printf("Invalid state!");
  }

  return 0;
}