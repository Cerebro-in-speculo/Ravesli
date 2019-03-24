#include<iostream>
#include"mhader.h"

int heightToywer()
{
    std::cout<<"Enter the initial height of the tower in meters: ";
    int temp{0};
    std::cin>>temp;
    return temp;
}

double heightBall(int timeBall)
{
    return (Constant::grav*timeBall*timeBall)/2;
}
