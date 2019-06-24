#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	map<int, string>season{ {12,"Зима"},{1,"Зима"},{2,"Зима"},{3,"Весна"},{4,"Весна"},{5,"Весна"},
							{6,"Лето"},{7,"Лето"},{8,"Лето"},{9,"Осень"},{10,"Осень"},{11,"Осень"} };
	cout << "Введите номер месяца(число от 1 до 12): ";
	int month;
	cin >> month;

	if (month >= 1 && month <= 12)
		cout << season[month];
	else
		cout << "Такого месяца не существует!\n";
	return 0;
}