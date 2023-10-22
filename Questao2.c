#include <stdio.h>

int main(void) {
 int x, y, z;
 int *px = NULL, *py = &y, *pz = &z;
 px = &x;
 *px = 5;
 *py = 7;
 printf("Valor do ponteiro 'x' antes da troca: %d\n", *px);
 printf("Valor do ponteiro 'y' antes da troca: %d\n\n", *py);  
 *pz = *px;
 *px = *py;
 *py = *pz;
 printf("Valor do ponteiro 'x' depois da troca: %d\n", *px);
 printf("Valor do ponteiro 'y' depois da troca: %d", *py);
 return 0;
}
