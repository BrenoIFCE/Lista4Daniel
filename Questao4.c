#include <stdio.h>
#include <stdlib.h>

#define TAM 5
int main(void) {
  int *pVetor, i, j = 0;
  pVetor = (int*)malloc(TAM * sizeof(int));

  if(!pVetor)
  {
    puts("Não há memória suficiente:");
    return 1;
  }
  for(i=0; i<5; i++)
  {
    printf("Digite o valor do vetor[%d]:\n", j);
    scanf("%d", &pVetor[i]);
    printf("O endereço desse vetor é: %p\n\n", (void *)&pVetor[i]);
    j++;
  }

  free(pVetor);
  return 0;
}
