#include "IngenieurWeapon.h"

IngenieurWeapon::IngenieurWeapon()
{
	TypeName = "Ingénieur";
}

IngenieurWeapon::~IngenieurWeapon()
{

}

void IngenieurWeapon::DisplayIngenigneurWeapon()
{
	std::cout << "Weapon choose" << WeaponName << "\n";
	std::cout << "Damage :" << TechnoDamage << "\n";
}


