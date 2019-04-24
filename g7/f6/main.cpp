#include <iostream>

int recursSum(int n)
{
    if(n<10)
    return n;
    else
    return recursSum(n/10)+n%10;
}


int main()
{
    std::cout<<recursSum(482)<<std::endl;
    return 0;
}
