#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//Заполнение масссива случайными  числами.
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число :"; cin >> minRand;
		cout << "Введите максимальное случайное число :"; cin >> maxRand;
		if (minRand >= maxRand);
		cout << "Error: значения некорректны, попробуйте еще раз";

	} while (minRand>=maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}