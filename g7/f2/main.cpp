#include <iostream>

int sumTo1(int a)
{
    int total{};
    for(int i=1;i<=a;++i)
        total+=i;
    return total;
}


int sumTo2(int a)
{
    int i{1};
    int total{};
    while(i<=a)
    {
        total+=i;
        ++i;
    }
    return total;
}

//void printAnimalName(const Animal &animal);

void minmax(int min,int max)
{
    if (min<max)
    std::cout<<"min = "<<min<<std::endl;
    else
    std::cout<<"min = "<<max<<std::endl;

    if (min>max)
    std::cout<<"max = "<<min<<std::endl;
    else
    std::cout<<"max = "<<max<<std::endl;
}

int getIndexOfLargestValue1(int *date,int sizeDate)
{
    int maxSizeDate{0};
    for(int i=1;i<sizeDate;++i)
    {
        if(date[maxSizeDate]<date[i])
        maxSizeDate=i;
    }
    return maxSizeDate;
}

int& getIndexOfLargestValuePtr(int *date,int sizeDate)
{
    int maxSizeDate{0};
    for(int i=1;i<sizeDate;++i)
    {
        if(date[maxSizeDate]<date[i])
        maxSizeDate=i;
    }
    return date[maxSizeDate];
}

void examplDate(int *&a)
{
    int i=7;
    int *b=&i;
    a=b;

    std::cout<<a<<std::endl;
}

int main()
{
    int b{3};
    int c(7);
    std::cout<<&c<<std::endl;

    int date[]{2,8,6,2,7,1,6,3,10};

    std::cout<<"MixSizeDate = "<<getIndexOfLargestValue1(date,9)<<std::endl;
    std::cout<<"MixSizeDatePtr = "<<getIndexOfLargestValuePtr(date,9)<<std::endl;

    std::cout<<sumTo1(b)<<std::endl;
    std::cout<<sumTo2(b)<<std::endl;

    minmax(b,c);

    return 0;
}
