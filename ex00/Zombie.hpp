#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string name);
        std::string get_name(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif