#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        const std::string get_type();
        void set_type(std::string type);
}
#endif