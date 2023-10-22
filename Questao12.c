#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 4

int main(void) {

  int M[N][N], r;
  int *X = (int*)malloc(N*sizeof(int));
  int *Y = (int*)malloc(N*sizeof(int));
  srand(time(NULL));
  if(X == NULL || Y == NULL)
  {
   printf("Erro na alocação de memória.");
   return 1;
  }

  for(int i=0; i<N; i++)
  {
    X[i] = rand() % 10;
  }
  printf("Vetor X: ");
  for(int i=0; i<N; i++) printf("[%d] ", X[i]);
  printf("\n");

  for(int i=0; i<N; i++)
  {
    double r = (double)rand() / RAND_MAX;
    if (r <= 0.3) Y[i] = X[i];
    else if (r <= 0.5) Y[i] = (i > 0) ? X[i - 1] : X[i];
    else if (r <= 0.7) Y[i] = (i < N - 1) ? X[i + 1] : X[i]; 
    else if (r <= 0.9) Y[i] = (i > 1) ? X[i - 2] : X[i]; 
    else Y[i] = (i < N - 2) ? X[i + 2] : X[i];
  }
  printf("Vetor Y: ");
  for(int i=0; i<N; i++) printf("[%d] ", Y[i]);
  printf("\n");
  
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      M[i][j] = 0;
    }
  }
  
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      for(int k=0; k<N; k++)
      {
        if(X[i] == X[k] && Y[j] == Y[k])
        {
          M[i][j]++;
        }
      }
    }
  }

  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      printf("M[%d][%d] = %d\n", i, j, M[i][j]);
    }
  }

  free(X);
  free(Y);
  
  return 0;
}
