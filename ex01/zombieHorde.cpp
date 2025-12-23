#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];

    zombies[0].set_name("Yumna");
    for(int i = 1; i < N ; i++)
        zombies[i].set_name(name);
    return (zombies);
}