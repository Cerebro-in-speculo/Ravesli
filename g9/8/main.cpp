#include <iostream>
#include <cstdint> // для целочисленных значений фиксированного размера
#include<cmath>

class FixedPoint
{
private:
	std::int16_t m_base; // это целая часть значения
	std::int8_t m_decimal; // это дробная часть значения

public:
	FixedPoint(double d)
	{
		m_base = static_cast<int16_t>(d);
		m_decimal = static_cast<std::int8_t>(round((d - m_base) * 100));	
	}

	FixedPoint(std::int16_t base = 0, std::int8_t decimal = 0)
		: m_base(base), m_decimal(decimal)
	{
		// Здесь нам нужно обработать случай, когда дробная часть > 99 или < -99,
		// но это вы должны будете сделать самостоятельно

		// Если целая или дробная части отрицательные
		if (m_base < 0.0 || m_decimal < 0.0)
		{
			// Проверяем целую часть
			if (m_base > 0.0)
				m_base = -m_base;
			// Проверяем дробную часть
			if (m_decimal > 0.0)
				m_decimal = -m_decimal;
		}
	}

	operator double() const
	{
		return m_base + static_cast<double>(m_decimal) / 100;
	}

	friend std::ostream& operator<<(std::ostream& out, const FixedPoint& fp)
	{
		out << static_cast<double>(fp);
		return out;
	}
};

int main()
{
	FixedPoint a(37, 58);
	std::cout << a << '\n';

	FixedPoint b(-3, 9);
	std::cout << b << '\n';

	FixedPoint c(4, -7);
	std::cout << c << '\n';

	FixedPoint d(-5, -7);
	std::cout << d << '\n';

	FixedPoint e(0, -3);
	std::cout << e << '\n';

	std::cout << static_cast<double>(e) << '\n';

	return 0;
}