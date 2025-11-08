#include "IngenieurWeapon.h"

IngenieurWeapon::IngenieurWeapon()
{
	TypeName = "Ingénieur";
	WeaponName = "Arme inconnue";
}

void IngenieurWeapon::DisplayIngenieurWeapon()
{
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << TechnoDamage() << "\n";
}


