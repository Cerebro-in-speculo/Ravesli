#include <iostream>

using namespace std;

int main()
{
    int a{5};

    std::cout<<a<<std::endl;
    std::cout<<&a<<std::endl;
    std::cout<<*&a<<std::endl;

    int* ptr;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    ptr=&a;

    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    *ptr=7;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<&a<<std::endl;

    std::cout<<sizeof(a)<<std::endl;
    std::cout<<sizeof(ptr)<<std::endl;

    return 0;
}
