#include <stdio.h>

#define TAM 10

void copiarString(char *copiar, char *colar)
{
  while(*copiar != '\0')
  {
    *copiar = *colar;
    copiar++;
    colar++;
  }
}

int main(void) {

  void copiarString(char *copiar, char *colar);
  char stringDepois[] = "Banana";
  char stringAntes[TAM] = "Maçã";
  printf("=========ANTES===========\n");
  printf("String que substituirá a outra string: %s\n", stringDepois);
  printf("String que será substituída: %s\n\n", stringAntes);
  printf("=========DEPOIS===========\n");
  copiarString(stringAntes, stringDepois);
  printf("String que substituirá a outra string: %s\n", stringDepois);
  printf("String que será substituída: %s", stringAntes);
  getchar();
  return 0;
}
