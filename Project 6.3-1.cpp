// Lab_06_3.cpp
// < Кузів Назар >
// Лабораторна робота № 6.3-1
// Опрацювання одновимірних масивів за допомогою звичайних функцій 
// Варіант 6

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High);
void Cout(int* a, const int size);
void CoutSum(int S);
int Sum(int* a, const int size);


int main()
{
	srand((unsigned)time(NULL));


	int Low, High, S, S1;
	const int n = 6;
	int a[n];

	cout << "Low ="; cin >> Low;
	cout << "High ="; cin >> High;
	cout << endl;

	Create(a, n, Low, High);
	Cout(a, n);
	S = Sum(a, n);
	CoutSum(S);

	return 0;
}
// 1)Звичайні Функції
// ----------------------------------------------------------
void Create(int* a, const int size, const int Low, const  int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}

void Cout(int* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " a[" << i << "]=" << a[i];
	}
	cout << endl;
}
void CoutSum(int S)
{
	cout << endl;
	cout << " Sum a[]=" << S << endl;
}

int Sum(int* a, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
	{
		S += a[i];
	}
	return S;
}
// ----------------------------------------------------------