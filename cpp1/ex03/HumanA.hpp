#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    std::string name;
    public :
        Weapon *weapon;
        HumanA(std::string name, Weapon &w)
        {
            weapon = &w;
            this->name = name;
        }
        void attack()
        {
            std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
        }
};