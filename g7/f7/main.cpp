#include <iostream>

void binarn(int n)
{
    if (n>0)
    {
        binarn(n/2);
        if(n%2>0)
            std::cout<<1<<" ";
        else
            std::cout<<0<<" ";
    }
}

int main()
{
    std::cout<<"Enter n:";
    int n;
    std::cin>>n;

    binarn(n);

    return 0;
}
