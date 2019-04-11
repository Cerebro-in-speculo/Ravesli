#include <iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

struct Person
{
    std::string name;
    std::string surname;
    int age;
};

int main()
{

    std::vector<int>nums = {1,5,2,3,5};
    int count1=count(begin(nums),end(nums),5);
    sort(begin(nums),end(nums));
    for(auto temp:nums)
        std::cout<<temp;


    return 0;
}
