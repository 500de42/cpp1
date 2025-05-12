#include <iostream>

class   Zombie
{
    private :
        std::string name;
    public :
        void announce(void)
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
        void set_name(std::string s)
        {
            this->name = s;
        }
        Zombie()
        {
            std::cout <<"Zombie has been create" << std::endl;
            return ;
        }
        ~Zombie()
        {
            std::cout << name << ": has been destroyed" << std::endl;
            return ;
        }

};

Zombie* zombieHorde(int N, std::string name);
