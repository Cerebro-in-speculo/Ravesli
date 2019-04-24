#include <iostream>

inline double max(const double a,const double b)
{
    return a>b?a:b;
}

 void swap(double* a,double* b)
 {
    double temp=*a;
    *a=*b;
    *b=temp;
 }

  int getLargestElement(int* date,int sizeDate)
  {
    int max=0;
    for(int i=1;i<sizeDate;++i)
    {
        if(*(date+max)<*(date+i))
            max=i;
    }
    return *(date+max);
  }

int main()
{
    double a=2.3,b=5.7;
    int sizeDate=10;
    int* date=new int[sizeDate]{2,7,8,11,3,0,59,6,7,8};

    std::cout<<max(a,b)<<std::endl;

    std::cout<<"a="<<a<<" b="<<b<<'\n';
    swap(&a,&b);
    std::cout<<"a="<<a<<" b="<<b<<'\n';


    std::cout<<getLargestElement(date,sizeDate)<<std::endl;

    delete[] date;

    return 0;
}
