#include "VoleurWeapon.h"

VoleurWeapon::VoleurWeapon()
{
	TypeName = "Voleur";
}

VoleurWeapon::~VoleurWeapon()
{

}

void VoleurWeapon::DisplayVoleurWeapon()
{
	std::cout << "Weapon choose: " << WeaponName << "\n";
	std::cout << "Damage: " << PhysicDamage() << "\n";
}