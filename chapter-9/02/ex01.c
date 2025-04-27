#include <stdio.h>

void separarParte(double numero, int *parteInteira, double *parteFracionaria) {
  *parteInteira = (int)numero;                // Parte inteira
  *parteFracionaria = numero - *parteInteira; // Parte fracionária
}

int main() {
  double numero;
  int inteiro;
  double fracionario;

  printf("Digite um número real: ");
  scanf("%lf", &numero);

  separarParte(numero, &inteiro, &fracionario);

  printf("Parte inteira: %d\n", inteiro);
  printf("Parte fracionária: %.6f\n", fracionario);

  return 0;
}
