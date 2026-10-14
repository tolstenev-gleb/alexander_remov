// Компиляция:
// gcc numbrite_sisend.c -o numbrite_sisend -lm
// Запуск теста
// ./numbrite_sisend < test1

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool get_parameters(float *ptr_A, float *ptr_C, float *ptr_N, float *ptr_k) {
    float A;
    float C;
    float N;
    float k;

    printf("Enter A: ");
    if (scanf("%f" , &A) < 1) 
    {
        printf("Input error...\n");
        return false;
    }
    printf("Enter C: ");
    if (scanf("%f" , &C) < 1) 
    {
        printf("Input error...\n");
        return false;
    }
    printf("Enter N: ");
    if (scanf("%f" , &N) < 1) 
    {
        printf("Input error...\n");
        return false;
    }
    printf("Enter k: ");
    if (scanf("%f" , &k) < 1) 
    {
        printf("Input error...\n");
        return false;
    }
    // Проверить ответ
    if (N <= 1 || C < 1)
    {
        printf("Parameter error...\n");
        return false;
    }

    *ptr_A = A;
    *ptr_C = C;
    *ptr_N = N;
    *ptr_k = k;

    return true;
}

// Функция возвращает статуc (логический тип данных bool)
// true  - успешное считвание
// false - ошибка ввода
bool get_parameter_A(float *ptr_A) {
    float A;
    printf("Enter A: ");
    if (scanf("%f" , &A) < 1) 
    {
        printf("Input error A...\n");
        return false;
    }
    *ptr_A = A;
    return true;
}

int main() {
    // Создать переменные
    float A;
    float C;
    float N;
    float k;
    float Xi;
    float y;

    // Считать ответ пользователя
    
    // Пример: считываение 1 параметра
    // if (get_parameter_A(&A) == false) 
    // {
    //     return 1;  // Выход из программы
    // }

    // Считывание всех параметров
    if (get_parameters(&A, &C, &N, &k) == false) 
    {
        return 1;  // Выход из программы
    }
    
    // Блок вычеслений

    // Вычисление Xi, Y и вывод  Xi, Y

    Xi = A; // X0 = A
    y = log(Xi * Xi * Xi + 2 * Xi - 5) / log(k);
    printf("%10.3f | %f\n", Xi, y);
    for (int i = 1; i < N; i++) 
    {
        Xi = Xi + pow(C, i);
        y = log(Xi * Xi * Xi + 2 * Xi - 5) / log(k);
        printf("%10.3f | %f\n", Xi, y);
    }

    return 0;
}