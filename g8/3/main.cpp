#include <iostream>
#include<cmath>

using namespace std;

class Point {
	double m_a;
	double m_b;

public:

	Point(double a = 0.0, double b = 0.0) :m_a(a), m_b{ b }
	{
	}

	double distanceTo(const Point& point)const
	{
		return sqrt((m_a-point.m_a) * (m_a-point.m_a) + (m_b-point.m_b) * (m_b-point.m_b));
	}

	void print()
	{
		cout << "Print(" << m_a << ", " << m_b << ")" << endl;
	}
};

int main()
{
	Point first(0.0,0.0);
	Point second(2.0, 5.0);
	first.print();
	second.print();
	cout <<"Distance between two points: "<<first.distanceTo(second) << endl;
	return 0;
}