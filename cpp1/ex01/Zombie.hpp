#include <iostream>

class   Zombie
{
    private :
        std::string name;
    public :
        void announce(void);
        void set_name(std::string s);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
