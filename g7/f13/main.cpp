#include <iostream>
#include<cassert>

class Stack
{
    int sizeStack=0;
    int date[10]{0};


    public:

    void reset()
    {
        for(int i=0;i<sizeStack;++i)
            date[i]=0;

        sizeStack=0;
    }

    bool push(int a)
    {
        if(sizeStack<10)
        {
            date[sizeStack]=a;
            ++sizeStack;
            return true;
        }
        else
            return false;
    }

    void pop()
    {
       if(sizeStack!=0)
       {
            date[sizeStack]=0;
            --sizeStack;
       }
       else assert(sizeStack==0);
    }

    void print()
    {
        std::cout<<"( ";
        for(int i=0;i<sizeStack;++i)
            std::cout<<date[i]<<" ";
        std::cout<<")"<<std::endl;
    }
};

int main()
{
    Stack stack1;
    stack1.reset();

    stack1.print();

    stack1.push(3);
    stack1.push(7);
    stack1.push(5);
    stack1.print();

    stack1.pop();
    stack1.print();

    stack1.pop();
    stack1.pop();
    stack1.print();

    stack1.pop();

    return 0;
}
