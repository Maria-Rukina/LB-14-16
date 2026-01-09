#pragma once
#ifndef ARRAY_H
#define ARRAY_H

double* full_elements(double* ptr_array, int n); //заполнение массива

double func(double x); //функция для заполнения массива

int put_elements(double* ptr_array, int n); //вывод массива

double* calc_elements(double* ptr_array, int n); //индивидуальный вариант

double sum_elements(double* ptr_array, int begin, int end); //сумма элементов массива в диапазоне

int find_element(double* ptr_array, int n, double element); //найти элемент

int delete_k(double* ptr_array, int size, int k); //удалить элемент по номеру

#endif // !ARRAY_H
