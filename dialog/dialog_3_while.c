/*
Код диалоговой программы с циклом while.
C проверкой некорректного ввода
*/

#include <stdio.h>

int main() {
  // Создать переменную correct_answer со значением
  int correct_answer = 35;
  // Создать переменную user_answer
  int user_answer = -1;  // c числом отличающимся от correct_answer
  // Создать переменную res для проверки кода scanf
  int res;
  
  // Запросить у пользователя целое число и сохранить его в user_answer
  while (user_answer != correct_answer) {
    printf("Enter a correct bus number: ");
    res = scanf("%d", &user_answer);
    // если ввод некорректный
    if (res < 1) {
      // то выйти из программы FAIL
      printf("Input is incorrect!\n");
      printf("Exit programm...\n");
      return 1;
    // иначе
    } else {
      // (ввод корректный)
      // Если user_answer равен correct_answer
      if (user_answer == correct_answer) {
        // то выход из программы OK
        printf("Exit programm...\n");
        return 0;
      } else {
        // иначе
        // вывести сообщение "Answer is incorrect, please try again"
        printf("Answer is incorrect, please try again\n");
      }
    }
  }

  printf("Exit programm...\n");
  return 0;
}

