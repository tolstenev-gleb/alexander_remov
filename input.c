#include <stdio.h>

int main(void) {
  int number = 0;
  printf("Enter a number: ");

  int r = scanf("%d", &number);
  printf("result of scanf: %d\n", r);

  printf("your number: %d\n", number);

  return 0;
}

