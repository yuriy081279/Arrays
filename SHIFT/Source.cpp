#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	/*const int n = 7;
	int arr[n] = {};
	int x;
	cout << "  Введите количество элементов, на которое надо сдвинуть массив: ";
	cin >> x;
	cout << endl;
	cout << "  Введите значение элементов массива: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << endl << endl;
	cout << "  Вывод элементов со сдвигом на заданное число единиц: ";
	for (int i = x; i < n; i++)
		cout <<arr[i] << "   ";
	for (int j = 0; j < x; j++)
		cout << arr[j] << "   ";
	cout << endl;*/
	
	const int n = 7;//количество элементов массива
	int arr[n] = {4,2,3,8,5,6,10};// ввод самого массива (заучить наизусть!!)
	int y;
	
	
	cout << endl;
	cout << "  Введите значения элементов массива ";
	
	for (int i = 0; i < n; i++)
		cout << arr[i]<<"     ";
	cout << endl;
	cout << "  Введите количество элементов, на которое надо сдвинуть массив: ";
	cin >> y;
	for (int i = 0; i < y; i++)
	{
		int x = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = x;
	}
	cout << endl;
	cout << "  Вывод элементов со сдвигом на заданное число единиц ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "     ";
	cout << endl;

	/*cout << "  Вывод элементов со сдвигом на заданное число единиц ";
	for (int i = x; i < n; i++)
		cout << arr[i] << "   ";
	for (int j = 0; j < x; j++)
		cout << arr[j] << "   ";
	cout << endl;*/



}