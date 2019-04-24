#include <iostream>


class Numbers
{
    public:
    int a;
    int b;

    void setNumbers(int x,int y)
    {
        a=x;
        b=y;
    }

    void print()
    {
        std::cout<<a<<" "<<b<<std::endl;
    }
};

int main()
{
    Numbers n1{12,58};
    Numbers n2;
    n2.Numbers::setNumbers(52,77);

    n1.print();
    n2.print();

    return 0;
}
