#include<iostream>
#include"hmain.h"

int main()
{
    int legs[Animals::ALL_ANIMALS]{2,4,2,4,2,0};

    std::cout<<"Elephant have "<<legs[Animals::ELEPHANT]<<" lags\n";

    return 0;
}
