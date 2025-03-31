#include <stdio.h>

int main() {
  float heightInMeters;
  char gender;

  printf("Informe a altura em metros e ao gênero (M) Masculino e (F) Feminino: "
         "\n\n");
  scanf("%f %c", &heightInMeters, &gender);

  if (gender == 'M') {
    printf("%f", (72.7 * heightInMeters) - 58);
  } else {
    printf("%f", (62.1 * heightInMeters) - 44.7);
  }
  return 0;
}