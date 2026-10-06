/*
Код диалоговой программы с циклом while.
C проверкой некорректного ввода
*/

#include <stdio.h>

#define BUS_NUMBER 35

int main() {
  // Создать переменную correct_answer со значением
  int correct_answer = BUS_NUMBER;
  // Создать переменную user_answer
  int user_answer;
  
  // Запросить у пользователя целое число и сохранить его в user_answer
  do {
    printf("Enter a correct bus number: ");
    // если ввод некорректный
    if (scanf("%d", &user_answer) < 1) {
      // то выйти из программы FAIL
      printf("Input is incorrect!\n");
      printf("Exit programm...\n");
      return 1;
    // иначе
    } else {
      // (ввод корректный)
      // Если user_answer равен correct_answer
      if (user_answer != correct_answer) {
        // иначе
        // вывести сообщение "Answer is incorrect, please try again"
        printf("Answer is incorrect, please try again\n");
      } else {
        printf("Answer is correct!\n");
      }
    }
  } while (user_answer != correct_answer);

  // то выход из программы OK
  printf("Exit programm...\n");
  return 0;
}
