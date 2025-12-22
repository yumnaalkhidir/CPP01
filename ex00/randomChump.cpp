#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombie = Zombie();

    zombie.set_name(name);
    zombie.announce();
}