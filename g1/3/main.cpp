#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	map<int, string>season{ {12,"����"},{1,"����"},{2,"����"},{3,"�����"},{4,"�����"},{5,"�����"},
							{6,"����"},{7,"����"},{8,"����"},{9,"�����"},{10,"�����"},{11,"�����"} };
	cout << "������� ����� ������(����� �� 1 �� 12): ";
	int month;
	cin >> month;

	if (month >= 1 && month <= 12)
		cout << season[month];
	else
		cout << "������ ������ �� ����������!\n";
	return 0;
}