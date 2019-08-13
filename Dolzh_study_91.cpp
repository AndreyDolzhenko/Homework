/*
Долженко Андрей
Задание 1
Написать шаблон функции для поиска среднего арифметического значений массива.

!!!НЕ РАЗОБРАЛСЯ С ПЕРЕГРУЗКОЙ ФУНКЦИЙ!!!
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int Average(int Mass[], int X); // интовая функция
double Average(double Mass[], double X); // дабловская функция
void Show(int Mass[], int X); // функция для вывода на экран массива

int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int const N = 5;
	int Array[N];
	int x;
	double y;

	for (int i = 0; i < N; i++)
	{
		x = rand() % 5 + 1;
		Array[i] = x;		
	}

	Show(Array, N);
	cout << "\n\n";

		
	cout << Average(Array, N);
	cout << "\n\n";
	cout << Average(Array, N);
		
}


void Show(int Mass[], int X) // функция для вывода на экран массива
{
	for (int i = 0; i < X; i++)
	{
		cout << Mass[i] << " ";
	}

}

int Average(int Mass[], int X) // функция для нахождения среднего в формате int
{
	int a=0;
	int aver;

	for (int i = 0; i < X; i++)
	{
		a += Mass[i];		
	}
	
	aver = a / X;

	return aver;
}

double Average(double Mass[], double X) // функция для нахождения среднего в формате double
{
	double a = 0;
	double aver;

	for (int i = 0; i < X; i++)
	{
		a += Mass[i];		
	}

	aver = a / X;

	return aver;
}
