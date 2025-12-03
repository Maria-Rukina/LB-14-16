#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "array.h"

double* full_elements(double* ptr_array, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++) ptr_array[i] = func(i);
	return ptr_array;
}

double func(double x)
{
	return pow(x, 3) - 4 * pow(x, 2) + 2;
}

int put_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++) printf("%.1lf \n", ptr_array);
	return n;
}

double* calc_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++) *ptr_array++ *= (-1);
	return ptr_array;
}

double sum_elements(double* ptr_array, int begin, int end)
{
	double sum;
	for (int i = begin; i <= end; i++) sum += ptr_array[i];
	return sum;
}

int find_element(double* ptr_array, int n, double element)
{
	for (int i = 0; i < n; i++)
	{
		if (ptr_array[i] == element) return i;
		else return -1;
	}
}

int delete_k(double* ptr_array, int n, int k)
{
	int new_n = n - 1;
	for (int i = k; i < (n - 1); i++) ptr_array[i] = ptr_array[i + 1];
	return n;
}