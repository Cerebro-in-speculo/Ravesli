#include<iostream>
#include<functional>

int getInteger()
{
    std::cout<<"Enter an integer:";
    int a;
    std::cin>>a;
    return a;
}

char getOperation()
{
    char operation;

    do{
        std::cout<<"Enter operation - *,+,-,\:";
        std::cin>>operation;

    } while (operation!='*'&&operation!='+'&&operation!='/'&&operation!='-');

    return operation;
}

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}

//typedef int (*arithmeticFcn)(int,int);
using arithmeticFcn=int(*)(int,int);

//arithmeticFcn getArithmeticFcn(char op)
//{
//   switch(op)
//  {
//	default:
//	case '+': return add;
//	case '-': return subtract;
//	case '*': return multiply;
//	case '/': return divide;
//   };
//}

struct arithmeticStruct
{
    char op;
    arithmeticFcn pfcn;
};

arithmeticStruct arithmeticArray[]
{
    {'+',add},
    {'-',subtract},
    {'*',multiply },
    {'/',divide }
};

arithmeticFcn getArithmeticFcn(char op)
{
    for (auto &arith:arithmeticArray)
    {
        if(arith.op==op)
            return arith.pfcn;
    }
    return add;
}

int main()
{
    int a=getInteger();
    char op=getOperation();
    int b=getInteger();

    arithmeticFcn fcn = getArithmeticFcn(op);
    std::cout << a << ' ' << op << ' ' << b << " = " << fcn(a, b) << '\n';

    return 0;
}
