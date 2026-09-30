#include <stdio.h>

int main(void) {
  int i;
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  // Цикл с постусловием
  i = 0;
  do {
    printf("Hello | %d\n", i);
    i++;
  } while (i < n);

  printf("\n");

  // Цикл с предусловием
  i = 0;
  while (i < n) {
    printf("Hello | %d\n", i);
    i++;
  }
  return 0;
}

