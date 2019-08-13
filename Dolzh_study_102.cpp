/*
�������� ������
������� 2
��� ������ ��������� ����� � ��������� �� �20 �� +20.
���������� ����� ������� ������� ������������� ��������� (������ ������ �������������� ��������
� ������ ������� �������������� ��������) � ������������� ��������, ����������� ����� ����.
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
	int leftBorder; // ����� ������� ����������
	int rightBorder; // ������ ������� ����������

	for (int i = 0; i < N; i++) // ���� ������ ������ � ��������� ���������� �� -20 �� 20
	{
		x = rand() % 40 - 20;
		Array[i] = x;
		cout << Array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; i++) // ���� ���� ����� ������� ����������
	{
		x = Array[i];
		if (x < 0)
		{
			cout << "\n\n\t������� ����� ������������� ����� �����" << x << endl;
			leftBorder = i;
			cout << "\n\n\t������� ����� � ������� - " << leftBorder << endl;
			break;
		}
		else
		{
			continue;
		}

	}

	for (int i = N - 1; i > 0; i--) // ���� ���� ������ ������� ����������
	{
		y = Array[i];
		if (y < 0)
		{
			cout << "\n\n\t������� ������ ������������� ����� �����" << y << endl;
			rightBorder = i;
			cout << "\n\n\t������� ����� � ������� - " << rightBorder << endl;
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

	for (int i = leftBorder + 1; i < rightBorder; i++) // ���� ��������� �������� � �������� ��������
		// ���������� ����� ������� ��� ������ �������� ����������, � ��� �� � �������������� ������� swap(Array[j], Array[j + 1])
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
	cout << "��������������� ������: \n\n";

	for (int i = 0; i < N; ++i) // ���� ������� ��������������� ������
	{
		cout << Array[i] << " ";
	}	
	
	cout << endl << endl;
}