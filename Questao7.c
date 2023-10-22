#include <stdio.h>
#include <string.h>

#define TAM 20

char* concatenarString(char *s1, char *s2)
{
  int i, j;
  for(i = 0; s1[i] != '\0'; i++);
  for(j = 0; s2[j] != '\0'; j++, i++)
  {
      s1[i] = s2[j];
  }
 s1[i] = '\0';
  return s1;
}
int main(void) {
  char string1[TAM] = "Banana";
  char string2[TAM] = "Maçã";
  printf("Primeira string é %s\n", string1);
  printf("Segunda string é %s\n\n", string2);

  concatenarString(string1, string2);
  printf("Strings concatenadas: %s", string1);
  return 0;
  
}
