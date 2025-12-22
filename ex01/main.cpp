#include "Zombie.hpp"

int main(void)
{
    // int N = 3;
    Zombie* horde = zombieHorde(3, "Scary");

    // for(int i = 0; i < N; i++)
    //     std::cout << "Zombie: " << i << " name is " << horde[i].get_name() << std::endl;
    std::cout << "Zombie: name is " << (*horde)->get_name() << std::endl;
    delete horde;
}