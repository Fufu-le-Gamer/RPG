#include "MageWeapon.h"
#include "IngenieurWeapon.h"

MageWeapon::MageWeapon()
{
	TypeName = "Mage";
}

MageWeapon::~MageWeapon()
{

}

void MageWeapon::DisplayMageWeapon()
{
	std::cout << "Weapon choose" << WeaponName << "\n";
	std::cout << "Damage :" << MagicDamage << "\n";
}
