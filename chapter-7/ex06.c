#include <stdio.h>
#include <string.h>

/*Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
palavra dada por esse caractere. Ao ﬁnal, imprima a nova string e o
número de vogais que ela possui.*/

int main() {
  char string[30], counter;

  fgets(string, 30, stdin);

  // subtraindo 1 para descontar o caracter "Enter"
  int stringLength = strlen(string) - 1;
  int indexToChange[stringLength] = {};

  for (int i = 0; i < stringLength; i++) {
    switch (string[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      counter++;
      break;
    default:
      break;
    }
  }

  printf("Vogais: %d\n", counter);

  printf("Digite o novo carater para substituir as vogais: ");

  char newChar = getchar();

  for (int i = 0; i < stringLength; i++) {
    switch (string[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      string[i] = newChar;
      break;
    default:
      break;
    }
  }

  printf("%s", string);

  return 0;
}