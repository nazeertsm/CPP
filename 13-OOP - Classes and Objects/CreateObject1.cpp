#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
    // attributes and Methods
    string name;
    int health;
    int xp;

    void talk(string);
    bool game_over();
};

int main()
{
    Player frank;
    Player hero;
    Player tom;
    Player sam;

    Player players[]{frank, hero};
    Player *pl2{nullptr};
    pl2 = new Player;

    // player_vec-collecton player object
    vector<Player> player_vec{tom};
    player_vec.push_back(sam);

    delete pl2;

    return 0;
}
