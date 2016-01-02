#include "ptmud.h"
#include <iostream>
#include "net/net.h"

int main()
{
    net::init();

    std::string s;
    do
    {
        std::cout << "> " << std::flush;
    } while (std::getline(std::cin, s) && s.length() > 0);
    std::cout << "End!\n";

    net::clean();
}
