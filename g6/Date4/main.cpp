#include<iostream>
#include"hmain.h"

int main()
{
	int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	int arrayScore = sizeof(array) / sizeof(array[0]);
	int chislo = getPlaer();

	std::cout << "Array[] = ";
	for (int i = 0; i < arrayScore; ++i)
		std::cout<<array[i] << " ";
	std::cout << std::endl;

	std::cout << "Player enter chislo = " << chislo << " index in array = " << getIndex(chislo,array,arrayScore) << std::endl;
	std::cout << "MaxIndex = " << maxIndex(array,arrayScore) << std::endl;

	system("pause");
	return 0;
}