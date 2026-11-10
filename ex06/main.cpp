#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl debug;
    if (argc == 2)
        debug.complain(argv[1]);
    else
        std::cout << "Usage: ./harlFilter complain_level" << std::endl;
}
