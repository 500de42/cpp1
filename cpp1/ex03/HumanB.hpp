#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    public :
        Weapon *weapon;
        HumanB(std::string name)
        {
            weapon = NULL;
            this->name = name;
        }
        void setWeapon(Weapon &C)
        {
            weapon = &C;
        }
        void attack()
        {
            if (weapon)
                std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
            else
                std::cout << this->name << "weapon not set" << std::endl;
        }
};