#include "AssassinWeapon.h"

AssassinWeapon::AssassinWeapon()
{
	TypeName = "Assassin";
}

AssassinWeapon::~AssassinWeapon()
{

}

void AssassinWeapon::DisplayAssassinWeapon()
{
	std::cout << "Weapon choose" << WeaponName << "\n";
	std::cout << "Damage :" << PhysicDamage << "\n";
}