#include <iostream>

int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string *B = &A;
    std::string &C = A;

    std::cout << &A << std::endl;
    std::cout << B << std::endl;
    std::cout << &C << std::endl;

    std::cout << A << std::endl;
    std::cout << *B << std::endl;
    std::cout << C << std::endl;
}