#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>

using namespace std;

class Monster {

public:
	enum MonsterType {
		Dragon,
		Goblin,
		Ogre,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES
	};

	Monster(MonsterType type,string name,int halth):m_type(type),m_name(name),m_halth(halth)
	{}

	string getTypeString()const
	{
		switch (m_type)
		{
		case Monster::Dragon:
			return "dragon";
		case Monster::Goblin:
			return "goblin";
		case Monster::Ogre:
			return "ogre";
		case Monster::Orc:
			return "orc";
		case Monster::Skeleton:
			return "skeleton";
		case Monster::Troll:
			return "troll";
		case Monster::Vampire:
			return "vampire";
		case Monster::Zombie:
			return "zombie";
		default:
			return "Error!";
		}
	}

	void print()const
	{
		cout << m_name << " is the " << getTypeString() << " that has " << m_halth << " health points.\n";
	}

private:
	MonsterType m_type;
	string m_name;
	int m_halth;
};

class MonsterGenerator {

public:

	static Monster generateMonster()
	{
		Monster::MonsterType type = static_cast<Monster::MonsterType>(0, Monster::MonsterType::MAX_MONSTER_TYPES-1);
		int halth = getRandomNumber(1, 100);

		string s_names[6]{ "Roman","Andrey","Denis","Jack","Max","Petr" };
		return Monster(type, s_names[getRandomNumber(0, 5)], halth);
	}

	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
	
};

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Monster m = MonsterGenerator::generateMonster();
	m.print();

	return 0;
}