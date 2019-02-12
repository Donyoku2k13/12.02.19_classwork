#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int summa(int a, int b, int c) {
	return a + b + c;
}
void figure1(int n, char c = '*', int type = 0);
void FillDiagonal(int a[][10], int n);
void printArray(int a[][10], int m, int n);
void fillArray(int a[][10], int n) {
	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 0 + rand() % 40;
		}
	}
}
template<typename T>  
	void sortArray(T a[][10], int n, int m, char sorting_order='a') {
		if (sorting_order == 'a')
		{
			for (int i = 0; i < n; i++)
			{
				for (int pass = 0; pass < m-1; pass++)
				{
					for (int j = 0; j < m-1; j++)
					{
						if (a[i][j]>a[i][j+1])
						{
							swap(a[i][j], a[i][j + 1]);
						}

					}

				}

			}

		}

	}
void main() 
{
	/*int a,t;
	char b;
	cin >> a >>b;
	figure1(a,b);
	cout << figure1 << endl;*/
	int a[10][10];
	fillArray(a, 10);
	printArray(a, 10, 10);
	cout << "after sorting" << endl;
	sortArray(a, 10, 10);
	printArray(a, 10, 10);






	system("pause");
	
}
void figure1(int n, char c , int type) {
	if (type==0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == n - 1 || j == 0 || i == j)
					cout << c;
				else
				cout << " ";
			}
			cout << endl;
		}
	}
	else if (type==1)
	{	
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < n; j++)
         {
			 if (i >= j)
				 cout << c;
		 }
			cout << endl;
		}
	}
	
}

void FillDiagonal(int a[][10], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int  j = 0; j < n; j++)
		{
			if (i==j||i==n-1-j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}
}

void printArray(int a[][10], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout<< endl;
	}
}
	
