#include "Zombie.hpp"

int main ()
{
    Zombie *first;
    int i = 0;

    first = zombieHorde(15, "Magouilleur");
    for (i = 0; i < 15; i++)
        first[i].announce();
    delete[] first;
}