#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombiehorde;
    int i = -1;

    zombiehorde = new Zombie[N];
    while (i++ < N - 1)
    {
        zombiehorde[i].set_name(name);
        zombiehorde[i].announce();
    }
    return (zombiehorde);
}


