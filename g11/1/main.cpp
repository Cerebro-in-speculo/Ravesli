#include <iostream>
#include <string>

using namespace std;

class Fruit
{
    string name;
    string color;

public:
    Fruit(string name_f="",string color_f=""):name(name_f),color(color_f)
    {}

    string getName()
    {
        return name;
    }

    string getColor()
    {
        return color;
    }
};

class Apple:public Fruit
{

protected:
    Apple(string name_a,string color_a):Fruit(name_a,color_a)
    {}
public:
    Apple(string color_a):Fruit("apple",color_a)
    {}
};

class Banana:public Fruit
{
public:
    Banana():Fruit("banana","yellow")
    {}
};

class GrannySmith:public Apple
{
public:
    GrannySmith():Apple("Granny Smith apple","green")
    {}
};

int main()
{
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;
}
