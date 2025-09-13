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
