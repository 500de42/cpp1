#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    public :
        Weapon *weapon;
        HumanB(std::string name);
        void setWeapon(Weapon &C);
        void attack();
};