#include<iostream>
#include<string>

void swapAutoRef(auto &a,auto &b)
{
    auto temp=a;
    a=b;
    b=temp;
}

void swapAutoPtr(auto *a,auto *b)
{
    auto temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{
    //int a{5};
    //int b{7};

    std::string a{"Roman"};
    std::string b{"Marina"};



    std::cout<<"a = "<<a<<'\t'<<"b = "<<b<<std::endl;

    swapAutoRef(a,b);

    std::cout<<"a = "<<a<<'\t'<<"b = "<<b<<std::endl;

    swapAutoPtr(&a,&b);

    std::cout<<"a = "<<a<<'\t'<<"b = "<<b<<std::endl;

    return 0;
}
