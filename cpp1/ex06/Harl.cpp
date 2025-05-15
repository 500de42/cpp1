#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*tab[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    for (i = 0; i < 4; i++)
        if (level == levels[i])
           break;
    switch(i)
    {
        case 4:
        {
            std::cout << "[ Probably complaining about insignificant problems ]\n\n";
            break ;
        }
        case 0:
        {
            (this->*tab[0])();
            (this->*tab[1])();
            (this->*tab[2])();
            (this->*tab[3])();
            break;
        }
        case 1:
        {    
            (this->*tab[1])();
            (this->*tab[2])();
            (this->*tab[3])();
            break;
        }
        case 2:
        {
            (this->*tab[2])();
            (this->*tab[3])();
            break;
        }
        case 3:
        {
            (this->*tab[i])();
            break;
        }
    }
}