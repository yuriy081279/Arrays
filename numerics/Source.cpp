#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int decimal;// ���������� ����� ��������� �������������
	cout << "������� ���������� ����� ";
	cin >> decimal;
	const int MAX_SIZE = 32; //int 4 bytes
	int bin[MAX_SIZE] = {}; //���� ������ ����� ������� ������� ��������� �����
	int i = 0;// ������� ��������
	while (decimal)
	{
		bin[i] = decimal % 2;// �������� ������� ������ ��������� �����
		decimal /= 2;//������� ���������� ������ ��������� �����
		i++;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];	
		if(i % 4 == 0)
		{
			cout << "  ";
		}
	}
	cout << endl;
}