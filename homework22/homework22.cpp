#include<iostream>
#include<stdlib.h>
using namespace std;
//1
//template <class T>
//void selectSort(T a[], long size, int ord = 1)
//{
//	long k, l, f;
//	T x;
//	f = 0;
//	l = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] < 0)
//		{
//			l = i;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] < 0)
//		{
//			f = i;
//			break;
//		}
//	}
//	for (int i = f + 1; i < l; i++)
//	{
//		k = i;
//		x = a[i];
//		for (int j = i + 1; j < l; j++)
//		{
//			if ((a[j] < x) == (ord == 0))
//			{
//				k = j;
//				x = a[j];
//			}
//		}
//		if (k != i)
//		{
//			a[k] = a[i];
//			a[i] = x;
//		}
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE]{-20, 9, -2, 7, 8,-4, 14, -19, 10, 20};
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << ar[i] << "\t";
//	}
//
//	cout << "\n\n";
//	selectSort(ar, SIZE, 0);
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
//}


//2
//emplate <class T> 
//oid RandomArray(T a[], long size)
//
//	for (int i = 0; i < size * 2; i++)
//	{
//		int f1 = rand() % size;
//		int f2 = rand() % size;
//		T x = a[f1];
//		a[f1] = a[f2];
//		a[f2] = x;
//	}
//
//
//emplate <class T>
//oid PrintArray(T a[], long size)
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << "\t";
//	}
//	cout << "\n\n";
//
//
//
//emplate <class T>
//oid SortPartArray(T a[], long first, long last, int ord = 1)
//
//	long k;
//	T x;
//	for (int i = first; i <= last; i++)
//	{
//		k = i;
//		x = a[i];
//		for (int j = i + 1; j <= last; j++)
//		{
//			if ((a[j] < x) == (ord == 0))
//			{
//				k = j;
//				x = a[j];
//			}
//		}
//		if (k != i)
//		{
//			a[k] = a[i];
//			a[i] = x;
//		}
//	}
//
//nt main()
//
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE]{ 6, 9, 2, 7, 8, 4, 14, 19, 10, 20 };
//	int ind = rand() % (SIZE - 1);
//	int x = ar[ind];
//	PrintArray(ar, SIZE);
//	RandomArray(ar, SIZE);
//	PrintArray(ar, SIZE);
//	int pos = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (ar[i] == x)
//		{
//			pos = i;
//			break;
//		}
//	}
//	cout << pos << "\n";
//	cout << x << "\n";
//	SortPartArray(ar, 0, pos - 1, 0);
//	SortPartArray(ar, pos + 1, SIZE - 1, 1);
//	PrintArray(ar, SIZE);
//
//}