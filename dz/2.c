// Создать переменную ответ
// Создать переменную стороны а и б
//Запросить у пользователя сторону а и проверить её
// Если а не верно то выход из программы
// Запросить б

#include <stdio.h>

int main() {
    int a;
    int b;
    
    printf("Enter the a:");
    scanf("%d", &a);
    if (a < 1) {
        printf("Invalid a\n");
        printf("Exit Programm...");
        return 1;
    }
    printf("Enter the b:");
    scanf("%d", &b);

    if (b < 1) {
        printf("Invalid b\n");
        printf("Exit Programm...");
        return 1;
    }
    int answer = a * b;
    printf("The square is: %d\n", answer);
    printf("Exit programm");
    return 0;
}