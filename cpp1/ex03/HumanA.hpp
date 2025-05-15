#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    std::string name;
    public :
        Weapon *weapon;
        HumanA(std::string name, Weapon &w);
        void attack();
};