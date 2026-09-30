/*
Код диалоговой программы с меткой и goto.
Без проверки некорректного ввода
*/

#include <stdio.h>

int main() {
  // Создать переменную correct_answer со значением
  int correct_answer = 35;
  // Создать переменную user_answer
  int user_answer;

get_answer:
  // Запросить у пользователя целое число и сохранить его в user_answer
  printf("Enter a correct bus number: ");
  scanf("%d", &user_answer);
  // Если user_answer равен correct_answer
  if (user_answer == correct_answer) {
    // то выход из программы
    printf("Answer is correct!\n");
    printf("Exit programm...\n");
    return 0;
  } else {
    // иначе
    // вывести сообщение "Answer is incorrect, please try again"
    printf("Answer is incorrect, please try again\n");
    // go to get_answer
    goto get_answer;
  }

  return 0;
}

