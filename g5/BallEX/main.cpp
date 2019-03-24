#include<iostream>
#include"mhader.h"

int main()
{
    double height=heightToywer();
    int time{0};

    while(height>0.0)
    {
        std::cout<<"At "<<time<<" seconds, the ball is at height: "<< height<<" meters\n";
        ++time;
        height-=heightBall(time);
    }

    std::cout<<"At "<<time<<" seconds, the ball is on the ground.\n";

    return 0;
}
