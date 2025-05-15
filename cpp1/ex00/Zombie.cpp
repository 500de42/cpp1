#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *newzombie;

    newzombie = new Zombie(name);
    return (newzombie);
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string s)
{
    this->name = s;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " has been destroyed" << std::endl;
    return ;
}


// int main ()
// {
//     Zombie* zomb = newZombie("Magouilleur");

//     zomb->announce();
//     delete(zomb);
// }

