#include "WarriorWeapon.h"

WarriorWeapon::WarriorWeapon()
{
	TypeName = "Warrior";
}

WarriorWeapon::~WarriorWeapon()
{

}

void WarriorWeapon::DisplayWarriorWeapon()
{
	std::cout << "Weapon choose" << WeaponName << "\n";
	std::cout << "Damage :" << PhysicDamage << "\n";
}
