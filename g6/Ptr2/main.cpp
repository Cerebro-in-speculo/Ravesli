#include<iostream>
#include<climits>

int main()
{
    int * ptr{nullptr};

    int a{1};
    //ptr=&a;


    if (ptr)
    std::cout<<"No null pointer\n";
    else
    std::cout<<"Null pointer\n";

    int b=INT_MAX,c{5};

    std::cout<<b<<std::endl;
    std::cout<<c<<" "<<&c<<std::endl;



    return 0;
}
