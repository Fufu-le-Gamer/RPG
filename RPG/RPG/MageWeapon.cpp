#include "MageWeapon.h"

MageWeapon::MageWeapon()
{
	TypeName = "Mage";
	WeaponName = "Arme inconnue";
}

void MageWeapon::DisplayMageWeapon()
{
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage :" << MagicDamage() << "\n";
}
