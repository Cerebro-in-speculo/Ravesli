#include <iostream>

using namespace std;

class Point {
	double m_a;
	double m_b;

public:

	Point(double a=0.0,double b=0.0):m_a(a),m_b{b}
	{
	}
	
	void print()
	{
		cout << "Print(" << m_a << ", " << m_b << ")" << endl;
	}
};

int main()
{
	Point first;
	Point second(2.0, 5.0);
	first.print();
	second.print();
	return 0;
}