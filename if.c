#include <stdio.h>

int main(void) {
  int a = 5;

  printf("a: %d\n", a);
  printf("a > 0: %d\n", a > 0);

  if (a > 0) {
    printf("Positive\n");
  } else {
    printf("Negative\n");
  }
  return 0;
}
