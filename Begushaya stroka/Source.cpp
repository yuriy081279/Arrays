#include<iostream>
#include<Windows.h>
using namespace std;
//#define VLEVO
#define VPRAVO
void main()
{
	setlocale(LC_ALL, "");
	const int n = 7;//количество элементов массива
	int arr[n] = { 75,2,81,3,124,6,15 };// ввод самого массива (заучить наизусть!!)
	int y;
	cout << endl;
	cout << "  ¬ведите значени€ элементов массива ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "     ";
	cout << endl;
	cout << endl;
	cout << "  ¬ведите количество элементов, на которое надо сдвинуть массив: ";
	cin >> y;
	
#ifdef VLEVO
	for (int i = 0; i < y; i++)
	{
		int x = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = x;
		system("CLS");
		for (int i = 0; i < n; i++)
		{

			cout << arr[i] << "     ";
		}
		cout << endl;
		Sleep(500);
	}
#endif // VLEVO

#ifdef VPRAVO
	for (int i = 0; i < y; i++)
	{
		int x = arr[n-1];
		for (int i = n-1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
		system("CLS");
		for (int i = 0; i < n; i++)
		{

			cout << arr[i] << "     ";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // VPRAVO

}