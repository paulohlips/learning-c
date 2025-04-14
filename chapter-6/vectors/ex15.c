#include <stdio.h>

int main() {
  float vector[10] = {3.14, 0.78, 9.01, -2.5, 4.2,
                      7.77, 1.01, -8.9, 5.55, 0.003};
  float result[10];

  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      if (vector[i] < vector[j]) {
        float grater = vector[i];
        vector[i] = vector[j];
        vector[j] = grater;
      }
    }
  }

  for (int i = 0; i <= 9; i++) {
    printf("%f \n", vector[i]);
  }

  return 0;
}

// TODO: me remova