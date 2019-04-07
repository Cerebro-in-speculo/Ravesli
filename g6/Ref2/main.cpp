#include<iostream>
#include<array>
#include<algorithm>
#include<vector>

int main()
{
    int a{7};
    int *ptr=&a;
    int &ref=a;

    int **ptrptr=&ptr;

    std::cout<<ptr<<'\t'<<*ptr<<std::endl;
    std::cout<<&ref<<'\t'<<ref<<std::endl;
    std::cout<<ptrptr<<'\t'<<*ptrptr<<'\t'<<**ptrptr<<std::endl;

    std::array<int,4> date{1,2,3,4};

    //int date[]{1,2,3,4};

    for(const auto &ref:date)
        std::cout<<ref<<" ";

        std::cout<<'\n';

   // for(int i=0;i<4;++i)
    //    std::cout<<*(date+i)<<" ";

        std::cout<<'\n';

    std::sort(date.rbegin(),date.rend());

    for(int i=0;i<date.size();++i)
        std::cout<<date.at(i)<<" ";

        std::cout<<'\n';

    std::vector<int>array;
    std::vector<int>array1{45,78,552,1442,52,4};


    return 0;
}
