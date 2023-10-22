#include <stdio.h>
#define TAM 10
void bubbleSort(int *array, int size) {
    int i, aux, flag;

    for (i = 0; i < size - 1; i++) {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(array + j) > *(array + j + 1)) {
                aux = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = aux;
                flag = 1;
            }
        }
        if (flag == 0) {
        break; 
        }
    }
}


int main(void) {
  int i;
  int lista[TAM];
  for(i=0; i<=TAM-1; i++)
  {
    printf("Item %d: ", i+1);
    scanf("%d", &lista[i]);
  }
  bubbleSort(lista, TAM);
for(i=0; i<=TAM-1; i++) printf("%d\n", lista[i]);
return 0;
}
