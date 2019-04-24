#include <iostream>

class Numbers
{
    double m_a;
    double m_b;
    double m_c;

    public:

    void setValues(double a,double b,double c)
    {
        m_a=a;
        m_b=b;
        m_c=c;
    }

    void primt()
    {
        std::cout<<"<"<<m_a<<","<<m_b<<","<<m_c<<">"<<std::endl;
    }
};


int main()
{
    Numbers ob1;

    ob1.setValues(4.2,2.1,8.7);
    ob1.primt();

    return 0;
}
