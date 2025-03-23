#include "stdio.h"

int main() {
  char ch;
  int num1;
  float num2;

  scanf("%c %d %f", &ch, &num1, &num2);
  printf("%c %d %f \n %c \t%d \t%f \n%c \n%d \n%f", ch, num1, num2, ch, num1, num2, ch, num1, num2);
  return 0;
}