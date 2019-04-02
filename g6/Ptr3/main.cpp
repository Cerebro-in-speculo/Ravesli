#include <iostream>

using namespace std;

int main()
{
    int a{5};
    int *ptr=&a;

    std::cout<<ptr<<std::endl;
    std::cout<<ptr+1<<std::endl;
    std::cout<<ptr+2<<std::endl;
    std::cout<<ptr+3<<std::endl;
    std::cout<<ptr+4<<std::endl;

    return 0;
}
