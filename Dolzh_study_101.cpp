/*
�������� ������
������� 1
��� ������ ����� ������������ 10 ���������. �������� �������, ������� ��������� ������ �� �����������
��� �� ��������, � ����������� �� �������� ��������� �������. ���� �� ����� 1, ���������� ���� ��
��������, ���� 0, �� �� �����������. ������ 2 ��������� ������� � ��� ������ � ��� ������, ������
�������� �� ��������� ����� 1.
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

	cout << "\n\n\t ������� ������ ������� - "; cin >> size;	
	cout << endl;
		
	int const N = size;
	int Array[100];

	for (int i = 0; i < N; i++)
	{
		Array[i] = rand() % 9 + 1;
		cout << Array[i] << " ";
	}
	cout << endl << endl;
	Array_Creation(Array, size); // ������� ��������� �� ��������� ������ �� ��������
	char choice1; // ���������� ��� ��������������� �����������
		
	do
	{
		cout << "\n\n\t ������� ��� ����������: �� ����������� - 0; �� �������� - 1 "; cin >> choice1;
		choice = choice1 - 48;
		Array_Creation(Array, size, choice);

	} while (choice1 < 48 || choice1 > 49); // ������������� ����������			
	cout << endl << endl;
}

void Array_Creation(int Massiv[100], int N, int X)
{
	int buff;

	if (X==0)
	{
		for (int i = 0; i < N - 1; i++) // ���� ��� ���������� �� �����������
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
		for (int i = 1; i < N - 1; i++) // ���� ��� ���������� �� ��������
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
		cout << "\n\n\t��������� ������ �����������";
	}
}
