#include "Weapon.h"

SmasherWeapon::SmasherWeapon()
{

}

SmasherWeapon::~SmasherWeapon() = default;

void SmasherWeapon::DisplayWeapon()
{
    std::cout << "Weapon : " << WeaponName << "\n";
    std::cout << "Melee Type : " << MeleeDamage() << "\n";
    std::cout << "Magic Type : " << MagicDamage() << "\n";
    std::cout << "Distance Type : " << ArrowDamage() << "\n";
    std::cout << "Resistance Type : " << TechnoDamage() << "\n";
}


