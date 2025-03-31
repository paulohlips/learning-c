#include <stdio.h>

int main() {
  char operation;
  float x, y;

  printf("Selecione uma operacao + , -, *, /: \n");
  scanf("%c", &operation);

  printf("Informe os dois números x e y: \n");
  scanf("%f %f", &x, &y);

  switch (operation) {
  case '+':
    printf("%f \n", x + y);
    break;
  case '-':
    printf("%f \n", x - y);
    break;
  case '*':
    printf("%f \n", x * y);
    break;
  case '/':
    printf("%f \n", x / y);
    break;
  default:
    printf("Invalid operation!");
  }
  return 0;
}