#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default Constructor called" << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " says Goodbye" << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}