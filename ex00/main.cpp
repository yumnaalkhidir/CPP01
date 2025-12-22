#include "Zombie.hpp"

int main(void)
{
    Zombie *heap = newZombie("Zombie from Heap");
    heap->announce();
    randomChump("Zombie from Stack");
    delete heap;
}