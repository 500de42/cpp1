#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    switch(ac)
    {
        case 2:
        {
            harl.complain((std::string)av[1]);
        }
    }
}
