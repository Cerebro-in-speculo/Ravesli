#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

class Car
{
public:
	Car(string mar="",string mod=""):marka(mar),model(mod){}
	friend ostream& operator<<(ostream& stream, const Car& car);
	friend bool operator<(const Car& l, const Car& r);

private:
	string marka;
	string model;
};

ostream& operator<<(ostream& stream, const Car& car)
{
	stream << car.marka << " " << car.model;
	return stream;
}
bool operator<(const Car& l, const Car& r)
{
	if (l.marka < r.marka)
		return true;
	if (l.marka > r.marka)
		return false;
	if (l.model < r.model)
		return true;
	if (l.model > r.model)
		return false;

	return false;
}

int main()
{
	std::vector<Car> v;
	v.push_back(Car("Ford", "Mustang"));
	v.push_back(Car("Renault", "Logan"));
	v.push_back(Car("Ford", "Ranger"));
	v.push_back(Car("Renault", "Duster"));

	sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Car

	for (auto& car : v)
		cout << car << '\n'; // требуется перегрузка оператора << для класса Car

	return 0;
}