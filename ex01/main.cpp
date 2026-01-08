#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Scary");

    for(int i = 0; i < N; i++)
    {
        std::cout << "horde[" << i << "]" << std::endl;
        horde[i].announce();
    }
    delete[] horde;
}