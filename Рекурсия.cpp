﻿// Подключение необходимых библиотек
#include <cmath>
#include <iostream>
#include <clocale>
using namespace std;
int factorial(int n) // Функция для нахождения факториала от числа
{   
	int res = 1; // Gеременная содержащая факториал n
	for (int i = 1; i <= n; i++) // Цикл в с меняющимся параметром i до n
	{
		res = res * i; 
	}
	return res;
}
float s(int n, float x) // Функция с рекурсией для нахождения S
{
	if (n == 0) // Рассматривается минимальный n = 1, поэтому значение при n = 0, нам не нужно, значит и прибавлять ничего не нужно, поэтому возвращается 0
		return 0;
	else
		return (cos(n * x) / factorial(n)) + s(n - 1, x); // Рекурсия. Функция вызывает сама себя с параметром n = n -1
}
int main()
{
	setlocale(LC_ALL, "RU");
	int n; // Выделение памяти для параметра n int потому что факториал можно вычислить только от целого положительного числа
	 //  Выделение памяти для параметра x, float т.к. cos(x) можно вычисить от нецелого и неположитальеного числа
	float x;
	cout << "Поочерёдно введите n и x для нахождения S = 1 + (cos(x) / 1!) + ... + (cos(n*x) / n!) с помощью рекурсии: " << endl;
	cin >> n >> x; // Инициализация n и x
	if (n < 0) // Условие проверки n 
		cout << "Некорректно введён параметр n, факториал можно определеить только если n >= 0";
	else
		cout << "После завершения работы функций с рекурсией S = " << 1 + s(n, x); // Вывод S
	return 0;
}


