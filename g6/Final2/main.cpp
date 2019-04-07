#include <iostream>
#include<string>

struct Children
{
    std::string name;
    int grade;
};

std::string nameChildren(int number)
{
    std::cout<<"Enter name children №"<<number<<":";
    std::string name;
    std::getline(std::cin,name);
    return name;
}

int gradeChildren(int number)
{
    std::cout<<"Enter grade children №"<<number<<":";
    int grade;
    std::cin>>grade;
    return grade;
}

void sortGradeMin(Children*children,int lenght)
{
    for(int i=0;i<lenght;++i)
    {
        for(int j=i+1;j<lenght;++j)
            if (children[i].grade<children[j].grade)
            {
                Children temp=children[i];
                children[i]=children[j];
                children[j]=temp;
            }
    }
}


int main()
{
    std::cout<<"Howe match children need enter?: ";
    int lenght{};
    std::cin>>lenght;

    std::cin.ignore(32786,'\n');

    Children *childrens = new Children[lenght];

    for(int i=0;i<lenght;++i)
    {
        childrens[i].name=nameChildren(i+1);
        (childrens+i)->grade=gradeChildren(i+1);
        std::cin.ignore(32786,'\n');
        std::cout<<std::endl;
    }

    sortGradeMin(childrens,lenght);


    for(int i=0;i<lenght;++i)
        std::cout<<childrens[i].name<<" got a grade of "<<(childrens+i)->grade<<std::endl;

    delete[]childrens;

    return 0;
}
