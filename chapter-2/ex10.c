#include "stdio.h"

int main() {
  int day, month, year;

  printf("Add your birth day, month and year using int values: \n");
  scanf("%d %d %d", &day, &month, &year);
  printf("%d/%d/%d \n", day, month, year);
  return 0;
}