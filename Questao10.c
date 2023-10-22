#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main(void) {
srand(time(NULL));

  int *X = (int *)malloc(N * sizeof(int));
  int *F = (int *)calloc(N, sizeof(int));

  if(X == NULL || F == NULL)
  {
   printf("Erro na alocação de memória.");
   return 1;
  }
  
  for(int i=0; i<N; i++)
  {
    X[i] = rand() % 10;
    F[X[i]]++;
  }
  
  printf("Vetor X: ");
  for(int i=0; i<N; i++) printf("[%d] ", X[i]);

  printf("\nVetor F (contagem de ocorrências):\n");
  for (int i = 0; i < N; i++) printf("Elemento %d: %d ocorrências\n", i, F[i]);

  free(X);
  free(F);
  return 0;
}
