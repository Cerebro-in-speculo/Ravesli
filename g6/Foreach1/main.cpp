#include<iostream>
#include<string>

int main()
{
	std::string date[]{ "Sasha","Ivan","John","Orlando","Leonardo","Nina","Anton","Molly" };

	bool enterName = false;
	std::string name{};

	do {

		std::cout << "Enter a name pleas: ";
		std::getline(std::cin, name);

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32876, '\n');
			enterName = true;
			std::cout << "Errer enter name!\n";
		}

	} while (enterName);
	

	bool flag=false;

	for (const std::string &ref : date)
	{
		if (ref == name)
		{
			flag = true;
			break;
		}
	}

	if(flag)
	std::cout << name << " was found.\n";
	else
	std::cout << name << " was not found.\n";

	system("pause");
	return 0;
}