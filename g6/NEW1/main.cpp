#include<iostream>

int main()
{
    int *ptr=new int{42};
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    delete ptr;
    ptr=nullptr;


    std::cout<<"Enter lenght date:";
    int lenght{0};
    std::cin>>lenght;

    int *date=new int[lenght];

    date[1]=5;
    *(date+2)=6;
    *(date+3)=7;

    for(int i=0;i<lenght;++i)
    std::cout<<*(date+i)<<" ";

    delete[]date;

    return 0;
}
