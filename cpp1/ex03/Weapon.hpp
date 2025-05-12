#ifndef WEAPON_HPP
#define WEAPON_HPP 

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public : 
        std::string getType()
        {
            return this->type;
        }
        Weapon(std::string S)
        {
            this->type = S;
            return ;
        }
        void setType(std::string newType)
        {
            this->type = newType;
        }
};

#endif