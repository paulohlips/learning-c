#include <stdio.h>
#include <string.h>

int main() {
  char nome[100];
  float valor, desconto, valorFinal;

  // Leitura dos dados
  printf("Digite o nome da mercadoria: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0'; // Remove o \n

  printf("Digite o valor da mercadoria: R$ ");
  scanf("%f", &valor);

  // Cálculo do desconto
  desconto = valor * 0.10;
  valorFinal = valor - desconto;

  // Exibição dos resultados
  printf("\n--- Detalhes da Compra ---\n");
  printf("Mercadoria: %s\n", nome);
  printf("Valor total: R$ %.2f\n", valor);
  printf("Desconto (10%%): R$ %.2f\n", desconto);
  printf("Valor à vista: R$ %.2f\n", valorFinal);

  return 0;
}
