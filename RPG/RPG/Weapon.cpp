#include "Weapon.h"
#include <iostream>

SmasherWeapon::SmasherWeapon()
{

}

SmasherWeapon::~SmasherWeapon()
{

}

void SmasherWeapon::DisplayType()
{
    std::cout << "Weapons of " << TypeName << "\n";
}


