/*
ƒолженко јндрей
«адание 3
Ќаписать функцию, котора€ принимает в качестве параметров вещественное число и количество знаков
после дес€тичной точки, которые должны остатьс€.
«адачей функции €вл€етс€ округление вышеуказанного вещественного числа с заданной точностью.
*/


#include<iostream>

using namespace std;

float Rounding(float X, int N);

int main()
{
	setlocale(LC_ALL, "ru");

	float number;
	int accuracy;	

	cout << "\n\n\t¬ведите вещественное число - "; cin >> number;
	cout << endl;
	cout << "\n\n\t¬ведите количество знаков после зап€той - "; cin >> accuracy;
	cout << endl;
	cout << "\n\n\t»тоговое значение равно - " << Rounding(number, accuracy);
	cout << endl;
}

float Rounding(float X, int N)
{
	float total; // высчитывает результат
	int cel; // принимает целое значение от вещественного числа
	float cel1;
	int power;

	power = pow(10, N); // определ€ет количество знаков после зап€той

	cel = (X * power); // увеличиваем целое число на заданное количество знаков
	cel1 = cel; // переводим целое число в дробный формат float
	
	total = cel1/power; // возвращаем заданное количество значений после зап€той за зап€тую	
	
	return total;
}
