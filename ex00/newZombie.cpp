#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    if (!zombie)
    {
        std::cerr << "Error\nAllocation failed" << std::endl;
        return (NULL);
    }
    return (zombie);
}