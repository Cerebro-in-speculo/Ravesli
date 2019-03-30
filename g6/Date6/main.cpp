#include<iostream>
#include<string>
#include<cstring>

int main()
{
    char date[]{"Romannn Ledovskihnnn"};
    char name[50];

    strcpy(name,date);
    strcat(name," age 35 ");

    std::cout<<name<<std::endl;

    int count{};
    for(int i=0;i<strlen(name);++i)
    {
        if(name[i]=='n')
        ++count;
    }


    std::cout<<strlen(name)<<std::endl;
   // std::cout<<strcmp(name,date)<<std::endl;
    std::cout<<count<<std::endl;

	return 0;
}
