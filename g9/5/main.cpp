#include<iostream>

using namespace std;

class Average
{
public:
	Average& operator+=(int a)
	{
		av_sum += a;
		++count;
		return *this;
	}

	friend ostream& operator<<(ostream& stream, const Average& av)
	{
		stream << static_cast<double>(av.av_sum) / av.count;
		return stream;
	}

private:
	int32_t av_sum=0;
	int8_t count=0;
};



int main()
{
	Average avg;

	avg += 5;
	std::cout << avg << '\n'; // 5 / 1 = 5

	avg += 9;
	std::cout << avg << '\n'; // (5 + 9) / 2 = 7

	avg += 19;
	std::cout << avg << '\n'; // (5 + 9 + 19) / 3 = 11

	avg += -9;
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9) / 4 = 6

	(avg += 7) += 11; // выполнение цепочки операций
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9 + 7 + 11) / 6 = 7

	Average copy = avg;
	std::cout << copy << '\n';

	return 0;
}