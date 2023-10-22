#include <stdio.h>

char* buscarCaractere(char *str, char c)
{
  while(*str != '\0')
  {
    if(*str == c) return str;
    str++;
  }
  return NULL;
}


int main(void) {
char caractere = 'x'; //só alterar o caractere 'x' e testar a condição para outros caracteres.
char string[] = "Mexico";
  
char *resultado = buscarCaractere(string, caractere);
if(resultado != NULL) printf("O caractere '%c' foi encontrado na posição %ld da string %s", caractere, resultado - string, string);
  
else printf("Caractere '%c' não encontrado na string.\n", caractere);
return 0;
}
