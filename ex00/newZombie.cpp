#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    if (!zombie)
    {
        std::cerr << "Error\nAllocation failed" << std::endl;
        return (NULL);
    }
    zombie->set_name(name);
    return (zombie);
}