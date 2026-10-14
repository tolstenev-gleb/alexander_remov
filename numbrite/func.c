#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hello(void) {
  printf("Hello, Alexander!\n");
}

void print_num(int num) {
  printf("num: %d\n", num);
}

int get_num(void) {
  return 42;
}

int square(int x) {
  return x * x;
}

int main() {

  hello();

  print_num(21);

  int n;
  n = get_num();

  int y;
  y = square(x);
  printf("%d\n", y);

  // Случайное число
  // srand(time(NULL));
  // int r = rand();
  // printf("%d\n", r);

  return 0;
}