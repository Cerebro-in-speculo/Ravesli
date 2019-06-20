#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

struct StudentGrade
{
	string name;
	char grade;
};

class GradeMap
{
public:
	GradeMap(){}
	char& operator[](const string& name);

private:
	vector<StudentGrade>m_map;
};

char& GradeMap::operator[](const string& name)
{
	for (StudentGrade& i : m_map)
	{
		if (i.name == name)
			return i.grade;
	}
	m_map.push_back({ name,' ' });
	return m_map.back().grade;
}

int main()
{
	GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	std::cout << "John has a grade of " << grades["John"] << '\n';
	std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

	return 0;
}