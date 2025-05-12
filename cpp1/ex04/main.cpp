#include "ex04.hpp"

void replace(std::string fileName, std::string occ1, std::string occ2)
{
    std::ifstream readFile(fileName.c_str());
    if (!readFile)
        return ;
    std::string finalName = fileName + ".replace";
    std::ofstream newFile(finalName.c_str());
    if (!newFile)
    {
        readFile.close();
        return ;
    }
    std::string line;
    size_t pos;
    while (getline(readFile, line))
    {
        pos = line.find(occ1);
        if (pos != std::string::npos)
        {
            line.erase(pos, occ1.size());
            line.insert(pos, occ2);
        }
        newFile << line << std::endl;
    }
    readFile.close();
    newFile.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
        replace((std::string)av[1], (std::string)av[2], (std::string)av[3]);
    else
        std::cout << "le programme attend 3 parametres" << std::endl;
}