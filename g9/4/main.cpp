#include<iostream>
#include<string>;
#include<sstream>

using namespace std;

class Mystring
{
	string m_s;

public:
	Mystring(string s=""):m_s(s)
	{}

	string operator()(int i, int j)
	{
		string s="";
		if (m_s.length() - i >= j)
		{
			for (int k = 0; k<j; ++k)
			{
				s += m_s[i+k];
			}
		}
		return s;
	}
};

int main()
{
	Mystring string("Hello, world!");
	std::cout << string(7, 6); // начинаем с 7 символа (индекса) и возвращаем следующие 6 символов

	return 0;
}