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
        Zombie(std::string s)
        {
            this->name = s;
            return ;
        }
        ~Zombie()
        {
            std::cout << name << "has been destroyed" << std::endl;
            return ;
        }

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);