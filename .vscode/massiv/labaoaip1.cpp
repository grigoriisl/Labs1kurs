#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		 int el = arr[i];
		 int j = i-1;
		 while (j >= 0 && arr[j] < el)
		 {
			 arr[j+1] = arr[j];
			 j=j-1;
		 }
		 arr[j+1] = el;
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
	insertionSort(array, 10); // сортируем массив
	cout << endl << "Сумма элементов массива :" << sum << endl;
	cout << "Максимальный элемент массива :" << maxi << endl;
    cout << "Получившийся массив: ";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}