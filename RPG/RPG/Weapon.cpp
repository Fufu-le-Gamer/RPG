#include "Weapon.h"
#include <iostream>

SmasherWeapon::SmasherWeapon()
{
    TypeName = "Arme inconnue";
}

void SmasherWeapon::DisplayTypeWeapon()
{
    std::cout << "Weapons of " << TypeName << "\n";
}


