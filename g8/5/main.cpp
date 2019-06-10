#include<iostream>
using namespace std;

class Welcome
{
private:
	char* m_data;

public:
	Welcome()
	{
		m_data = new char[14];
		const char* init = "Hello, World!";
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~Welcome()
	{
		cout << "\nDistructor start:\n";
		delete[]m_data;
		cout << "Distructor end:\n";
	}

	void print() const
	{
		std::cout << m_data;
	}

};

int main()
{
	Welcome hello;
	hello.print();

	return 0;
}