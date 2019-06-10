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

	friend double distanceFrom(const Point&,const Point&);

	double distanceTo(const Point& point)const
	{
		return sqrt((m_a - point.m_a) * (m_a - point.m_a) + (m_b - point.m_b) * (m_b - point.m_b));
	}

	void print()
	{
		cout << "Print(" << m_a << ", " << m_b << ")" << endl;
	}
};

double distanceFrom(const Point& p1, const Point& p2)
{
	return sqrt((p1.m_a - p2.m_a) * (p1.m_a - p2.m_a) + (p1.m_b - p2.m_b) * (p1.m_b - p2.m_b));
}

int main()
{
	Point first(0.0, 0.0);
	Point second(2.0, 5.0);
	first.print();
	second.print();
	cout << "Distance between two points: " << first.distanceTo(second) << endl;
	cout << "Distance between two points: " << distanceFrom(first,second) << endl;
	return 0;
}