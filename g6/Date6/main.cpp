#include<iostream>
#include<string>

int main()
{
	std::string name{ "Roman Ledovskih" };
	std::cout << name << std::endl;

	char nameC[]{ "Roman Ledovskih" };
	for (int i = 0; i < sizeof(nameC); ++i)
		std::cout << nameC[i] <<" "<<static_cast<int>(nameC[i]);
	std::cout << std::endl;

	std::cout << nameC << '\n';

	char date[5];
	std::cin.getline(date, 4);
	std::cout << date;

	
	//std::getline(std::cin, name);
	//std::cout << name;
    //std::cout << std::endl;

	system("pause");
	return 0;
}