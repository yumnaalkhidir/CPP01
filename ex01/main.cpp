#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie* horde = zombieHorde(N, "Scary");

    horde->announce();
    (horde+1)->announce();
    std::cout << "value of horde: " << horde << std::endl;
    std::cout << "value of &horde: " << &horde << std::endl;
    std::cout << "value of horde + 1: " << horde + 1 << std::endl;
    // std::cout << "value of &horde: " << &(horde + 1) << std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << "value of &horde[" << i << "]: " << &horde[i] << std::endl;
        // std::cout << "Zombie: " << i << " name is " << (horde + i)->get_name() << std::endl;
        // (horde + i)->announce();
    }
    delete[] horde;
}