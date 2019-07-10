#include<iostream>
#include<string>

using namespace std;

class Fruit
{
public:
	Fruit(string n="",string c=""):name(n),color(c)
	{}
	string getFruitName()const
	{
		return name;
	}
	string getFruitColor()const
	{
		return color;
	}
private:
	string name;
	string color;
};

class Apple:public Fruit
{
public:
	Apple(string n,string c,double f):Fruit(n,c),fiber(f)
	{}
	friend ostream& operator<<(ostream &stream, const Apple& apple)
	{
		stream << "Apple (" << apple.getFruitName() << ", " << apple.getFruitColor() << ", " << apple.getAppleFiber() << ")" << endl;
		return stream;
	}
	double getAppleFiber()const
	{
		return fiber;
	}
private:
	double fiber;
};

class Banana:public Fruit
{
public:
	Banana(string n,string c):Fruit(n,c)
	{}
	friend ostream& operator<<(ostream &stream, const Banana& banana)
	{
		stream << "Banana (" << banana.getFruitName() << ", " << banana.getFruitColor()<< ")" << endl;
		return stream;
	}
};

int main()
{
	const Apple a("Red delicious", "red", 7.3);
	cout << a;

	const Banana b("Cavendish", "yellow");
	cout << b;

	return 0;
}