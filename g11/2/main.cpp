#include <iostream>
#include <string>
using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

class Creature
{
protected:
    string name;
    char c;
    int health;
    int uron;
    int gold;

public:

    Creature(string name_c,char c_c,int health_c,int uron_c,int gold_c):name(name_c),c(c_c),health(health_c),
    uron(uron_c),gold(gold_c) {}

    string getName(){ return name;}
    char getC(){return c;}
    int getHealth(){return health;}
    int getUron(){ return uron;}
    int getGold(){return gold;}

    void reduceHealth(int a){health-=a;}
    bool isDead(){return health<=0;}
    void addGold(int a){gold+=a;}
};

class Player:public Creature
{
    int level=1;

public:
    Player(string name_player):Creature(name_player,'@',10,1,0){}
    int getLevel(){return level;}
    void levelUp()
    {
        ++level;
        ++health;
    }
    bool hasWon(){return level>=20;}
};

class Monster:public Creature
{
public:

    enum Type
    {
        DRAGON,
        ORC,
        SLIME,
        MAX_TYPES
    };

    struct MonsterData
    {
        string name;
        char symbol;
        int health;
        int damage;
        int gold;
    };

    Monster(Type type):Creature(monsterData[type].name,monsterData[type].symbol,monsterData[type].health,
                        monsterData[type].damage,monsterData[type].gold)
    {
    }

    static MonsterData monsterData[MAX_TYPES];

    static Monster getRandomMonster()
    {
        int num =getRandomNumber(0, MAX_TYPES-1);
        return Monster(static_cast<Type>(num));
    }
};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

// Этот метод обрабатывает атаку монстра игроком
void attackMonster(Player &p, Monster &m)
{
	// Если игрок мёртв, то он не может атаковать монстра
	if (p.isDead())
		return;

	std::cout << "You hit the " << m.getName() << " for " << p.getUron() << " damage.\n";

	// Здоровье монстра уменьшается от урона игрока
	m.reduceHealth(p.getUron());

	// Если монстр мёртв, то увеличиваем level игрока
	if (m.isDead())
	{
		std::cout << "You killed the " << m.getName() << ".\n";
		p.levelUp();
		std::cout << "You are now level " << p.getLevel() << ".\n";
		std::cout << "You found " << m.getGold() << " gold.\n";
		p.addGold(m.getGold());
	}
}

// Этот метод обрабатывает атаку игрока монстром
void attackPlayer(Monster &m, Player &p)
{
	// Если монстр мёртв, то он не может атаковать игрока
	if (m.isDead())
		return;

	// Здоровье игрока уменьшается от урона монстра
	p.reduceHealth(m.getUron());
	std::cout << "The " << m.getName() << " hit you for " << m.getUron() << " damage.\n";
}

// Этот метод обрабатывает весь бой между игроком и рандомным монстром
void fightMonster(Player &p)
{
	// Сначала генерируем рандомного монстра
	Monster m = Monster::getRandomMonster();
	std::cout << "You have encountered a " << m.getName() << " (" << m.getC() << ").\n";

	// Пока монстр или игрок не мёртвы, то бой продолжается
	while (!m.isDead() && !p.isDead())
	{
		std::cout << "(R)un or (F)ight: ";
		char input;
		std::cin >> input;
		if (input == 'R' || input == 'r')
		{
			// 50/50 шанс удачного побега
			if (getRandomNumber(1, 2) == 1)
			{
				std::cout << "You successfully fled.\n";
				return; // встречу с монстром удалось избежать
			}
			else
			{
				// Неудачная попытка побега даёт монстру право атаковать
				std::cout << "You failed to flee.\n";
				attackPlayer(m, p);
				continue;
			}
		}

		if (input == 'F' || input == 'f')
		{
			// Сначала атакует игрок, затем монстр
			attackMonster(p, m);
			attackPlayer(m, p);
		}
	}
}

int main()
{
	//Creature o("orc", 'o', 4, 2, 10);
	//o.addGold(5);
	//o.reduceHealth(1);
	//std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.";

	//cout<<"Enter your name: ";
	//string name_player;
	//getline(cin,name_player);
	//cout<<"Welcome "<<name_player<<endl;
    //Player player(name_player);
    //cout<<"You have "<<player.getName()<<" health and are carrying "<<player.getGold()<<" gold.";

    //Monster m(Monster::ORC);
	//std::cout << "A " << m.getName() << " (" << m.getC() << ") was created.\n";

    //srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа
	//rand(); // сбрасываем первый результат

	//for (int i = 0; i < 10; ++i)
	//{
	//	Monster m = Monster::getRandomMonster();
	//	std::cout << "A " << m.getName() << " (" << m.getC() << ") was created.\n";
	//}

    srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа
	rand(); // сбрасываем первый результат

	std::cout << "Enter your name: ";
	std::string playerName;
	std::cin >> playerName;

	Player p(playerName);
	std::cout << "Welcome, " << p.getName() << '\n';

	// Если игрок не мёртв и еще не победил, то игра продолжается
	while (!p.isDead() && !p.hasWon())
		fightMonster(p);

	// К этому моменту игрок либо мёртв, либо победил
	if (p.isDead())
	{
		std::cout << "You died at level " << p.getLevel() << " and with " << p.getGold() << " gold.\n";
		std::cout << "Too bad you can't take it with you!\n";
	}
	else
	{
		std::cout << "You won the game with " << p.getGold() << " gold!\n";
	}

	return 0;
}
