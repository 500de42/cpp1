#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *newzombie;

    newzombie = new Zombie(name);
    return (newzombie);
}

// int main ()
// {
//     Zombie* zomb = newZombie("Magouilleur");

//     zomb->announce();
//     delete(zomb);
// }

