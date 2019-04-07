#include <iostream>
#include<cstdlib>
void setCstyleString(const char *a)
{
    while(*a!='\0')
        std::cout<<*(a++);
    std::cout<<std::endl;
}


int main()
{
    char a[]{"Hello, world!!!"};
    setCstyleString(a);

    return 0;
}
