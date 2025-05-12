#include "Zombie.hpp"

int main ()
{
    Zombie *first;
   first = zombieHorde(15, "Magouilleur");
   delete[] first;
}