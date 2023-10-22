#include <stdio.h>

int main() {
  int x,tamanhoLoop, menorValor;
  int *px = &x;
 
  puts("Insira o tamanho do loop:");
  scanf("%d", &tamanhoLoop);

  for(int i=0; i<=tamanhoLoop; i++)
  {
  puts("Insira um número:");
  scanf("%d", &*px);
  if(i==0) menorValor = *px;
  if(*px < menorValor) menorValor = *px;
  printf("Menor valor fornecido até agora: %d\n\n", menorValor);
  }
  return 0;
}
