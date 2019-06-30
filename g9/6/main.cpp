#include<iostream>
#include<cassert>

using namespace std;

class IntArray
{
public:
	IntArray(int size_p):size(size_p)
	{
		date = new int[size] {0};
	}

	IntArray(const IntArray& date_p) :size(date_p.size)
	{
		date = new int[size];
		for (int k = 0; k < date_p.size; ++k)
		{
			date[k] = date_p.date[k];
		}
	}
	
	int& operator[](const int size_array)
	{
			return date[size_array];
	}

	friend ostream& operator<<(ostream& stream, const IntArray& ia)
	{
		for (int k=0;k<ia.size;++k)
		{
			stream << ia.date[k] << ' ';
		}
		return stream;
	}

	IntArray& operator=(IntArray& date_p)
	{
		if (this == &date_p)
			return *this;
		delete[] date;

		size = date_p.size;
		date = new int[size];
		for (int k = 0; k < size; ++k)
		{
			date[k] = date_p.date[k];
		}
		return *this;
	}

	~IntArray()
	{
		delete[] date;
	}

private:
	int size = 0;
	int* date=nullptr;
};

IntArray fillArray()
{
	IntArray a(6);
	a[0] = 6;
	a[1] = 7;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 8;

	return a;
}

int main()
{
	IntArray a = fillArray();
	std::cout << a << '\n';

	IntArray b(1);
	a = a;
	b = a;

	std::cout << b << '\n';

	return 0;
}