#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(int n) {
  // int n = 42;
  printf("%d\n", n);
  printf("%p <- in function\n", &n);  // & - взятие адреса
}

int main() {
  int x;
  x = 42;

  printf("%d\n", x);
  printf("%p <- in main\n", &x);  // & - взятие адреса

  f(x);

  // printf("\n");

  // int *ptr = &x;

  // printf("%p\n", ptr);
  // printf("%d\n", *ptr);  // * - разыменование (dereferencing)

  // *ptr = 21;
  
  // printf("%d\n", x);

  return 0;
}