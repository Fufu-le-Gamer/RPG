#include "VoleurWeapon.h"

VoleurWeapon::VoleurWeapon()
{
	TypeName = "Voleur";
	WeaponName = "Arme inconnue";
}

void VoleurWeapon::DisplayVoleurWeapon()
{
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << PhysicDamage() << "\n";
}