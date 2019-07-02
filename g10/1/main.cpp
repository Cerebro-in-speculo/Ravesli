#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Worker
{
public:
	Worker(string name_p):name(name_p)
	{}

	string getName()
	{
		return name;
	}

private:
	string name;
};

class Department
{
	
public:
	Department(){}

	void add(Worker *worker_p)
	{
		worker.push_back(worker_p);
	}

	friend ostream& operator<<(ostream& stream,const Department& department)
	{
		for (size_t k = 0; k < department.worker.size(); ++k)
			stream << department.worker[k]->getName()<<' ';
		stream << endl;
		return stream;
	}

private:
	vector<Worker*>worker;
};

int main()
{
	// Создаём Работников вне области видимости класса Department
	Worker* w1 = new Worker("Anton");
	Worker* w2 = new Worker("Ivan");
	Worker* w3 = new Worker("Max");

	{
		// Создаём Отдел и передаём Работников в качестве параметров конструктора
		Department department; // содаём пустой Отдел
		department.add(w1);
		department.add(w2);
		department.add(w3);

		std::cout << department;

	} // department выходит из области видимости и уничтожается здесь

	std::cout << w1->getName() << " still exists!\n";
	std::cout << w2->getName() << " still exists!\n";
	std::cout << w3->getName() << " still exists!\n";

	delete w1;
	delete w2;
	delete w3;

	return 0;
}