#include<iostream>

int main()
{
    int n{5};
    int total{0};

    for(int i=1;i<=n;++i)
        total+=i;
    std::cout<<total<<std::endl;

    return 0;
}
