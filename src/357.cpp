//============================================================================
// Name        : 357.cpp
// Author      : 32
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

 #include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Введите скорость(км/ч)" << endl;
	double s=0;
	cin >> s;
	if (s<60)
	{
		cout << "Скорость в пределах нормы";
	}
	else if (s>=60 && s<=80)
	{
		cout << "Вы приближаетесь к превышению скорости";
	}
	else if (s>=60 && s<=80)
	{
		cout << "Превышение скорости!";
	}
	return 0;
}


/*#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
	if (n==0 or n==1)
	{
		return 1;
	}
	return n*(factorial(n-1));
}

int main() {
	cout << "Введите натуральное число или ноль" << endl;
	double s=0;
	cin >> s;
	if (s<0)
	{
		cout << "Вы ввели неверное число";
	}
	cout << factorial(s);
	return 0;
}*/


/*#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
	if (n==0 or n==1)
	{
		return 1;
	}
	return n*(factorial(n-1));
}

int main() {
	cout << "Введите натуральное число или ноль" << endl;
	double s=0;
	cin >> s;
	if (s<0)
	{
		cout << "Вы ввели неверное число";
	}
	cout << factorial(s);
	return 0;
}*/

#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		 int el = arr[i];
		 int j = i - 1;
		 while (j >= 0 && arr[j] > el)
		 {
			 arr[j + 1] = arr[j];
			 j--;
		 }
		 arr[j + 1] = el;
 }
}


int main()
{
	int array[10];
	int sum=0;
	int maxi=array[0];
	cout << "Введите 10 чисел" << endl;
	for (int i = 0; i < 10; i++)
	{
	cout << "Введите элемент " << i + 1 << ": ";
	cin >> array[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
		sum=array[i]+sum;
		if (array[i]> maxi)
		{
			maxi=array[i];
		}
	}
	cout << endl << "Сумма элементов массива:" << sum << endl;
	cout << "Максимальный элемент массива:" << maxi;

}
