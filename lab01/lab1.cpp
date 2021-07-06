

#include <iostream>
using namespace std;

//Variant 3 task 4
/*cos(x) + x – 7,
e^x – 1 / x
*/
//
//float koren(float a, float b, float (*f)(float))
//{
//	float x, e = 0.001;
//	do
//	{
//		x = (a + b) / 2;
//		if (f(x) * f(a) <= 0)
//			b = x;
//		else a = x;
//	} while (abs(a - b) > 2 * e);
//	cout << x << endl;
//	return x;
//}
//
//float f1(float x)
//{
//	float z = cos(x) + x - 7;
//	return z;
//}
//
//float f2(float x)
//{
//	float z = exp(x) - (1 / x);
//	return z;
//}
//
//void main()
//{
//	float aa, bb;
//	cout << "Enter a: " << endl;
//	cin >> aa;
//	cout << "Enter b: " << endl;
//	cin >> bb;
//	float* a = &aa;
//	float* b = &bb;
//	koren(*a, *b, f1);
//	koren(*a, *b, f2); // enter 1 and 9
//}

//Variant 3 task 5 (find min int)
/*Написать функцию fmax с переменным числом параметров, которая находит
минимальное из чисел типа int или из чисел типа double, тип параметров
определяется с помощью первого параметра функции. */

//int fmax(int a, ...)
//{
//	int* p = &a;
//	int min=100;
//	for (int i = 0; i < a; i++)
//	{
//		if (*(++p) < min)
//			min = *p;
//	}
//	cout << min;
//	return min;
//}
//
//int main()
//{
//	fmax(8, 5, 12, 89, -42, 45, -13, 98);
//}



//Variant 15 (Dop 1) (decimal to binary)
/*Написать функцию с переменным числом параметров для перевода чисел из 
десятичной системы счисления в двоичную. С помощью этой функции перевести 
различные числа из десятичной системы счисления в двоичную.*/


//int DecToBin(int a, ...)
//{
//	char tA[33];
//	int* pA = &a;
//	for (int i = 0; i < 7; i++)
//	{
//		_itoa_s(*(pA++), tA, 2);
//		cout << tA << endl;
//	}
//	return a;
//}
//
//void main()
//{
//	DecToBin(1, 4, 13, 15, 245, 256, 853);
//}


//Variant 11 (Dop 2) (min elem matrix)
/*Написать функцию с переменным числом параметров, которая находит минимальное
значение матрицы. С ее помощью найти минимальные значения в n матрицах.*/
//
//float MinMatr(int aa, ...)
//{
//	int *a = &aa;
//	int min = 100;
//	for (int i = 0; i < 9; i++)
//	{
//		if (*(a++) < min)
//			min = *a;
//	}
//	cout << min;
//	return min;
//}
//
//int main()
//{
//	MinMatr(8, 12, 54, -12, -45, 0, 34, 23, 75);
//}

//Variant 9 (Dop 3) (max letters in word)
/*Написать функцию, которая в предложении подсчитывает количество символов в 
слове максимальной длины (слова разделяются пробелами). Опробовать работу
функции на нескольких предложениях. */

void StrSym()
{
	char* Size = new char[256];
	cout << "Введите предложение, заканчивающееся точкой:\n";
	cin.getline(Size, 256, '.');
	short i = 0, Probel = 0, LastP = 0, Length = strlen(Size), Max = 0;
	while (i != Length)
	{
		if (*(Size + i) == ' ')
		{
			Probel = i;
			short Word = Probel - LastP - 1;
			if (Word > Max)
			{
				Max = Word;
			}
			LastP = Probel;
		}
		if ((i + 1) == Length)
		{
			short Word = Length - LastP - 1;
			if (Word > Max)
			{
				Max = Word;
			}
		}
		i++;
	}
	cout << "Максимальное количество букв в слове: " << Max;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	StrSym();
}
