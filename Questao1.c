#include <stdio.h>

int main(void) {
  int x, y, z;
  int *px = NULL, *py = &y, *pz = &z;
  px = &x;
  *px = 2;
  *py = 8;
  *pz = *px + *py;
  printf("Valor soma: %d\n", *pz);
  printf("Endereço da soma: %p\n", pz);
  return 0;
}
