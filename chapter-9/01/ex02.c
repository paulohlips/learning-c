#include <stdio.h>
#include <string.h>

struct Month {
  char name[10];
  int days;
};

struct Month findMonth(int x) {
  struct Month m;

  switch (x) {
  case 1:
    strcpy(m.name, "January");
    m.days = 31;
    break;
  case 2:
    strcpy(m.name, "February");
    m.days = 28; // Not handling leap years here
    break;
  case 3:
    strcpy(m.name, "March");
    m.days = 31;
    break;
  case 4:
    strcpy(m.name, "April");
    m.days = 30;
    break;
  case 5:
    strcpy(m.name, "May");
    m.days = 31;
    break;
  case 6:
    strcpy(m.name, "June");
    m.days = 30;
    break;
  case 7:
    strcpy(m.name, "July");
    m.days = 31;
    break;
  case 8:
    strcpy(m.name, "August");
    m.days = 31;
    break;
  case 9:
    strcpy(m.name, "September");
    m.days = 30;
    break;
  case 10:
    strcpy(m.name, "October");
    m.days = 31;
    break;
  case 11:
    strcpy(m.name, "November");
    m.days = 30;
    break;
  case 12:
    strcpy(m.name, "December");
    m.days = 31;
    break;
  default:
    strcpy(m.name, "Invalid");
    m.days = -1;
  }

  return m;
}

int main() {
  int x;

  scanf("%d", &x);

  struct Month m = findMonth(x);
  printf("The month is %s, with %d days.", m.name, m.days);
  return 0;
}