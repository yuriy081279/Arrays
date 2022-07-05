#include<iostream>
using namespace std;
#define tab "\t"
//#define MATRIX_ADDITION 
//#define BASICS
void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 5;
	const int COLS = 6;
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // BASICS
	//Matrix addition;
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	int C[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "------------";
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << "  ";
		}
		cout << endl;
	}
#ifdef MATRIX_ADDITION
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = B[i][j] + A[i][j];
		}
	}

#endif
	//int x;

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			int x = (A[i][j] * B[j][i]);
			(C[i][j]) += x;
			//break;

		  //cout << "x= " << x << tab;
		  //break;
		}

		//cout << "------------";
		//cout << endl;

	}
	//cout << "------------";

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;

	}

	cout << endl;

}