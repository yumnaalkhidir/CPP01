#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];
    if (!zombies)
    {
        std::cerr << "Error\nAllocation failed" << std::endl;
        return (NULL);
    }
    for(int i = 0; i < N ; i++)
        zombies[i].set_name(name);
    return (zombies);
}