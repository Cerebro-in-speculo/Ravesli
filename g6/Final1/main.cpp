#include<iostream>

enum Gun
{
    ZELIE,
    FACEL,
    ARROW,
    ALLGUN
};



struct Player
{
    int gun[ALLGUN]{ZELIE,FACEL,ARROW};
};


int countTotalItems(Player player)
{
    int totalGun{};

    for(int i=0;i<ALLGUN;++i)
    {
        totalGun+=player.gun[i];
    }
    return totalGun;
}

int main()
{
    Player player1;

    player1.gun[0]=3;
    player1.gun[1]=6;
    player1.gun[2]=12;

    std::cout<<"Total arrow = "<<countTotalItems(player1)<<std::endl;

    return 0;
}
