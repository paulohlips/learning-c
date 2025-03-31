#include <stdio.h>

int main() {
  int x;

  scanf("%d", &x);

  if (x % 3 == 0 && x % 5 == 0) {
    printf("Numero é divisivel por 3 e 5 simultaneamene \n");
  } else {
    printf("Numero nao é divisivel por 3 e 5 simultaneamene \n");
  }
  return 0;
}