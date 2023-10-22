#include <stdio.h>
#include <string.h>
#define TAM 80
int main(void) {
  int t;
  char str[TAM];
  int *pTamanho = &t;
  puts("Digite uma palavra:");
  fgets(str, TAM, stdin);
  *pTamanho = strlen(str);
  printf("Tamanho da palavra: %d", t-1);
  return 0;
}
