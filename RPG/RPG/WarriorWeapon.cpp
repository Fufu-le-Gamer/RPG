#include "WarriorWeapon.h"

WarriorWeapon::WarriorWeapon()
{
	TypeName = "Warrior";
	WeaponName = "Arme inconnue";
}

void WarriorWeapon::DisplayWarriorWeapon()
{
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage :" << PhysicDamage() << "\n";
}
