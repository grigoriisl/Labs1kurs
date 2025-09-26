#include <iostream>
#include <iomanip>
using namespace std;
//4 var
int factorial(int n)
{
	if (n==0 or n==1)
	{
		return 1;
	}
	return n*(factorial(n-1));
}

int main() 
{
	cout << "Введите натуральное число или ноль" << endl;
	double s=0;
	cin >> s;
	if (s<0)
	{
		cout << "Вы ввели неверное число";
	}
    else
    {
	    cout << factorial(s);
    }
	return 0;
}