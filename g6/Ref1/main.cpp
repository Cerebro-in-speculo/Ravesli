#include<iostream>

int main()
{
    int a{5};
    const int *ptr=&a;
    const int &ref=a;


    std::cout<<a<<'\t'<<&a<<std::endl;
    std::cout<<*ptr<<'\t'<<ptr<<std::endl;
    std::cout<<ref<<'\t'<<&ref<<std::endl;

    //ref=8;

    std::cout<<a<<'\t'<<&a<<std::endl;
    std::cout<<*ptr<<'\t'<<ptr<<std::endl;
    std::cout<<ref<<'\t'<<&ref<<std::endl;

   // *ptr=11;

    std::cout<<a<<'\t'<<&a<<std::endl;
    std::cout<<*ptr<<'\t'<<ptr<<std::endl;
    std::cout<<ref<<'\t'<<&ref<<std::endl;



    a=7;

    std::cout<<a<<'\t'<<&a<<std::endl;
    std::cout<<*ptr<<'\t'<<ptr<<std::endl;
    std::cout<<ref<<'\t'<<&ref<<std::endl;



    return 0;
}
