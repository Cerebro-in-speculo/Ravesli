#include<iostream>
#include<string>

void getName(std::string *name,int lenght)
{
    for(int i=0;i<lenght;++i)
    {
        std::cout<<"Name "<<i+1<<" : ";
        std::getline(std::cin,*(name+i));
    }
}

void sortName(std::string *name,int lenght)
{
    for(int i=0;i<lenght-1;++i)
    {
        for(int j=i+1;j<lenght-1;++j)
        {
            if(name[i][0]>name[j][0])
            {
                std::string temp =name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }

    }
}

void setName(std::string* name,int lenght)
{
    std::cout<<std::endl;

    for (int i=0;i<lenght;++i)
    {
       std::cout<<"Name "<<i+1<<" : ";
       std::cout<<*(name+i)<<std::endl;
    }




}
