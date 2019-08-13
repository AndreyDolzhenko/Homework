/*
Долженко Андрей
Задание 2
Дан массив случайных чисел в диапазоне от –20 до +20.
Необходимо найти позиции крайних отрицательных элементов (самого левого отрицательного элемента
и самого правого отрицательного элемента) и отсортировать элементы, находящиеся между ними.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int N = 40;
	int Array[N];
	int x, y;
	int leftBorder; // левая граница сортировки
	int rightBorder; // правая граница сортировки

	for (int i = 0; i < N; i++) // цикл строит массив с заданными значениями от -20 до 20
	{
		x = rand() % 40 - 20;
		Array[i] = x;
		cout << Array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; i++) // цикл ищет левую границу сортировки
	{
		x = Array[i];
		if (x < 0)
		{
			cout << "\n\n\tКрайнее левое отрицательное число равно" << x << endl;
			leftBorder = i;
			cout << "\n\n\tПозиция числа в массиве - " << leftBorder << endl;
			break;
		}
		else
		{
			continue;
		}

	}

	for (int i = N - 1; i > 0; i--) // цикл ищет правую границу сортировки
	{
		y = Array[i];
		if (y < 0)
		{
			cout << "\n\n\tКрайнее правое отрицательное число равно" << y << endl;
			rightBorder = i;
			cout << "\n\n\tПозиция числа в массиве - " << rightBorder << endl;
			break;
		}
		else
		{
			continue;
		}

	}

	cout << endl << endl;

	//const int M = rightBorder - leftBorder - 1;
	//cout << M;
	//cout << endl << endl;	

	for (int i = leftBorder + 1; i < rightBorder; i++) // цикл сортирует значения в заданных границах
		// сортировку можно сделать при помощи буферной переменной, а так же с использованием функции swap(Array[j], Array[j + 1])
	{
		for (int j = leftBorder+1; j < rightBorder - 1; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				//y = Array[j];
				//Array[j] = Array[j + 1];
				//Array[j + 1] = y;
				swap(Array[j], Array[j + 1]);

			}
		}
	}
	cout << "Отсортированный массив: \n\n";

	for (int i = 0; i < N; ++i) // цикл выводит отсортированный массив
	{
		cout << Array[i] << " ";
	}	
	
	cout << endl << endl;
}