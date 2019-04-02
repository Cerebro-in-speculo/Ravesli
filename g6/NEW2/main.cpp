#include <iostream>
#include"hmain.h"

using namespace std;

int main()
{
    std::cout<<"Hawe name need enter?: ";
    int lenght{0};
    std::cin>>lenght;

    std::cin.ignore(32678,'\n');

    std::cout<<"Enter this name:\n";
    std::string *name=new std::string [lenght];

    getName(name,lenght);
    sortName(name,lenght);
    setName(name,lenght);

    delete[]name;

    return 0;
}
