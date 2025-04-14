#include <stdio.h>

int main() {
  int A[10], B[10], C[10], a, b;

  for (int i = 0; i <= 9; i++) {
    scanf("%d", &a);
    A[i] = a;
  }

  for (int i = 0; i <= 9; i++) {
    scanf("%d", &b);
    B[i] = b;
  }

  for (int i = 0; i <= 9; i++) {
    C[i] = A[i] - B[i];
  }

  for (int i = 0; i <= 9; i++) {
    printf("%d ", C[i]);
  }

  return 0;
}