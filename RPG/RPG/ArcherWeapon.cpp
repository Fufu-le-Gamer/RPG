#include "ArcherWeapon.h"

ArcherWeapon::ArcherWeapon()
{
	TypeName = "Archer";
}

ArcherWeapon::~ArcherWeapon()
{

}

void ArcherWeapon::DisplayArcherWeapon()
{
	std::cout << "Weapon choose" << WeaponName << "\n";
	std::cout << "Damage :" << ArrowDamage << "\n";
}

