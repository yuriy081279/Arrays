#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int x, c, d,y;
	d = n;


	//���������� �������� ����������  �������.
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			cout << "Error: �������� �����������, ���������� ��� ���";
		}

	} while (minRand >= maxRand);

	
		for (int i = n-1; i >= 0; i--)
		{

			arr[i] = rand() % (maxRand - minRand) + minRand;
						
			x = arr[i];
			cout<< arr[i] << tab;
			
		}
		cout << endl;
		
	
}