#include "Zombie.hpp"

void Zombie::announce(void)
(
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
)

void Zombie::set_name(std::string s)
{
    this->name = s;
}

Zombie::Zombie(void)
{
    std::cout <<"Zombie has been create" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << name << ": has been destroyed" << std::endl;
    return ;
}

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


