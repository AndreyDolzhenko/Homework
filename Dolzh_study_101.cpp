/*
Долженко Андрей
Задание 1
Дан массив чисел размерностью 10 элементов. Написать функцию, которая сортирует массив по возрастанию
или по убыванию, в зависимости от третьего параметра функции. Если он равен 1, сортировка идет по
убыванию, если 0, то по возрастанию. Первые 2 параметра функции — это массив и его размер, третий
параметр по умолчанию равен 1.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void Array_Creation(int Massiv[100], int N, int X=1);

int main()
{
	setlocale(LC_ALL, "ru");	
	int size;
	int choice;

	cout << "\n\n\t Введите размер массива - "; cin >> size;	
	cout << endl;
		
	int const N = size;
	int Array[100];

	for (int i = 0; i < N; i++)
	{
		Array[i] = rand() % 9 + 1;
		cout << Array[i] << " ";
	}
	cout << endl << endl;
	Array_Creation(Array, size); // функция сортирует по умолчанию массив по убыванию
	char choice1; // переменная для синтаксического анализатора
		
	do
	{
		cout << "\n\n\t Укажите тип сортировки: по возрастанию - 0; по убыванию - 1 "; cin >> choice1;
		choice = choice1 - 48;
		Array_Creation(Array, size, choice);

	} while (choice1 < 48 || choice1 > 49); // синтаксичесий анализатор			
	cout << endl << endl;
}

void Array_Creation(int Massiv[100], int N, int X)
{
	int buff;

	if (X==0)
	{
		for (int i = 0; i < N - 1; i++) // цикл для построения по возрастанию
		{
			for (int j = 0; j < N - i -1; j++)
			{
				if (Massiv[j] > Massiv[j + 1])
				{
					buff = Massiv[j];
					Massiv[j] = Massiv[j + 1];
					Massiv[j + 1] = buff;
				}
			}
		}
		cout << endl << endl;
		for (int i = 0; i < N; i++)
		{
			cout << Massiv[i] << " ";
		}
	}

	else if (X == 1)
	{
		for (int i = 1; i < N - 1; i++) // цикл для построения по убыванию
		{
			for (int j = 0; j < N - i; j++)
			{
				if (Massiv[j] < Massiv[j + 1])
				{
					buff = Massiv[j];
					Massiv[j] = Massiv[j + 1];
					Massiv[j + 1] = buff;
				}
			}
		}
		cout << endl << endl;
		for (int i = 0; i < N; i++)
		{
			cout << Massiv[i] << " ";
		}
	}

	else
	{
		cout << "\n\n\tВведенный символ некорректен";
	}
}
