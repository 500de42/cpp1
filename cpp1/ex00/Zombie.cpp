#include "Zombie.hpp"

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
