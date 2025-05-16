#include "Weapon.hpp"

const std::string Weapon::getType()
{
    return this->type;
}

Weapon::Weapon(std::string S)
{
    this->type = S;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}
