#include <stdio.h>

int main() {
  int salary, loanInstallment;

  scanf("%d %d", &salary, &loanInstallment);

  if (loanInstallment <= salary * 0.2) {
    printf("Empréstimo concedido");
  } else {
    printf("Empréstimo não concedido");
  }
  return 0;
}