#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    switch(ac)
    {
        case 1: 
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        }
        case 2:
        {
            harl.complain((std::string)av[1]);
            break ;
        }
    }
}
