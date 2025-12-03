#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include "array.h"

int task1(void);
int task2(void);

int main() 
{
    setlocale(LC_ALL, "Russian");
    task1();
    task2();
}

int task1(void)
{
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    int begin, end;
    printf("\nВведите начало и конец: ");
    scanf("%d %d", &begin, &end);

    int k;
    printf("\nВведите номер элемента: ");
    scanf("%d", &k);

    double* ptr_array = malloc(size * sizeof(double));
    double* ptr_result1 = malloc(size * sizeof(double));
    double* ptr_result2 = malloc(size * sizeof(double));
    double* ptr_result3 = malloc(size * sizeof(double));

    if (!ptr_array || !ptr_result1) 
    { 
        puts("error"); 
        return 1; 
    }
    if (!ptr_array || !ptr_result2)
    {
        puts("error");
        return 1;
    }
    if (!ptr_array || !ptr_result3)
    {
        puts("error");
        return 1;
    }
    
    full_elements(ptr_array, size);

    for (int i = 0; i < size; i++) ptr_result1[i] = ptr_array[i];
    calc_elements(ptr_result1, size);

    for (int i = 0; i < size; i++) ptr_result2[i] = ptr_array[i];
    sum_elements(ptr_result1, size, begin, end);

    for (int i = 0; i < size; i++) ptr_result3[i] = ptr_array[i];
    find_element(ptr_result1, size, k);

    printf("Исходный массив:\n");
    put_elements(ptr_array, size);

    printf("Преобразованный массив:\n");
    put_elements(ptr_result1, size);

    int s = put_elements(ptr_result2, size);
    printf("Сумма элементов массива в диапазоне: %d\n", s);

    int i = put_elements(ptr_result3, size);
    printf("Индекс искуемого числа: %d\n", i);

    free(ptr_array);
    free(ptr_result1);
    free(ptr_result2);
    free(ptr_result3);

    return 0;
}

int task2(void)
{
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    double* ptr_array = malloc(size * sizeof(double));

    for (int i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%lf", &ptr_array[i]);
    }

    printf("Введённый массив:\n");
    put_elements(ptr_array, size);

    int k;
    printf("\nВведите номер элемента, который хотите удалить: ");
    scanf("%d", &k);
    size = delete_k(ptr_array, size, k);
    printf("\nПолученный массив:\n");
    put_elements(ptr_array, size);

    free(ptr_array);
}