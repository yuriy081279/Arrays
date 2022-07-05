#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;

	int arr[n]={3,5,8,67,45};

	//ввод массива с клавиатуры
	cout << "введите значение элементов массива ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];//обращаемся к элементу массива на запись
	}
	//вывод массива на экран 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;// Обращаемся к элементу массива на чтение
	}
	cout << endl; 
	//вывод массива на экран в обратном порядке
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;// Обращаемся к элементу массива на чтение
	}
	cout << endl;
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Среднее арифметическое:" <<(double)sum / n << endl;
	//Поиск минимального и максимального значения в массиве
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "минимальное значение в массиве: " << min << endl;
	cout << "максимальное значение в массиве: " << max << endl;
}