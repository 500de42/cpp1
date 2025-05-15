#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
}

void HumanB::setWeapon(Weapon &C)
{
    weapon = &C;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << "weapon not set" << std::endl;
}
