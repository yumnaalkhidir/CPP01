#include "Harl.hpp"

int main(void)
{
    Harl debug;
    debug.complain("DEBUG");
    debug.complain("INFO");
    debug.complain("WARNING");
    debug.complain("ERROR");
    debug.complain("error");
}