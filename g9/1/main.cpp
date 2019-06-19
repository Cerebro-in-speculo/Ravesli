#include<iostream>

using namespace std;

class Fraction {
	int m_numerator=0;
	int m_denominator=1;

public:
	Fraction(int numerator=0,int denominator=1):m_numerator(numerator), m_denominator(denominator)
	{
		reduce();
	}

	int getNumerator() { return m_numerator; }
	int getDenominator() { return m_denominator; }

	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend Fraction operator*(const Fraction& f1, const int value);
	friend Fraction operator*(const int value, const Fraction& f1);

	void print()
	{
		cout << getNumerator() << '/' << getDenominator()<<endl;
	}

	static int nod(int a, int b)
	{
		return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
	}

	void reduce()
	{
		int del = Fraction::nod(m_numerator, m_denominator);
		m_numerator /= del;
		m_denominator /= del;
	}
};

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return { f1.m_numerator * f2.m_numerator,f1.m_denominator * f2.m_denominator};
}

Fraction operator*(const Fraction& f1, const int value)
{
	return { f1.m_numerator * value,f1.m_denominator};
}

Fraction operator*(const int value,const Fraction& f1)
{
	return { value * f1.m_numerator,f1.m_denominator };
}

int main()
{
	Fraction f1(3, 4);
	f1.print();

	Fraction f2(2, 7);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 3;
	f4.print();

	Fraction f5 = 3 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();
}