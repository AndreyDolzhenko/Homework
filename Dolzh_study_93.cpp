/*
�������� ������
������� 3
�������� �������, ������� ��������� � �������� ���������� ������������ ����� � ���������� ������
����� ���������� �����, ������� ������ ��������.
������� ������� �������� ���������� �������������� ������������� ����� � �������� ���������.
*/


#include<iostream>

using namespace std;

float Rounding(float X, int N);

int main()
{
	setlocale(LC_ALL, "ru");

	float number;
	int accuracy;	

	cout << "\n\n\t������� ������������ ����� - "; cin >> number;
	cout << endl;
	cout << "\n\n\t������� ���������� ������ ����� ������� - "; cin >> accuracy;
	cout << endl;
	cout << "\n\n\t�������� �������� ����� - " << Rounding(number, accuracy);
	cout << endl;
}

float Rounding(float X, int N)
{
	float total; // ����������� ���������
	int cel; // ��������� ����� �������� �� ������������� �����
	float cel1;
	int power;

	power = pow(10, N); // ���������� ���������� ������ ����� �������

	cel = (X * power); // ����������� ����� ����� �� �������� ���������� ������
	cel1 = cel; // ��������� ����� ����� � ������� ������ float
	
	total = cel1/power; // ���������� �������� ���������� �������� ����� ������� �� �������	
	
	return total;
}
