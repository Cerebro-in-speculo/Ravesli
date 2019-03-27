#include<iostream>

int getPlaer()
{
	while(true)
	{
		std::cout << "Enter chislo ot 1 to 9: ";
		int temp{0};
		std::cin >> temp;

		std::cin.ignore(32678, '\n');

		if (std::cin.fail() || temp<0 || temp>9)
		{
			std::cin.clear();
			std::cin.ignore(32786, '\n');
			std::cout << "error. Povtorite enter.\n";
		}
		else
			return temp;
	}
}

int getIndex(int chislo,int date[],int score)
{
	for (int i = 0; i < score; ++i)
	{
		if (date[i] == chislo)
			return i;
	}
}

int maxIndex(int date[],int sizeDate)
{
	int maxIndex{};

	for (int i=0;i<sizeDate;++i)
	{
		if (date[i] > date[maxIndex])
			maxIndex = i;
	}
	std::cout << ".MaxArray = " << date[maxIndex];

	return maxIndex;


}