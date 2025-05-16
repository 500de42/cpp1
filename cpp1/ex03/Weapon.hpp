#ifndef WEAPON_HPP
#define WEAPON_HPP 

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public : 
        const std::string getType();
        Weapon(std::string S);
        void setType(std::string newType);
};

#endif