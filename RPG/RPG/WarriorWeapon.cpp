#include "WarriorWeapon.h"

WarriorWeapon::WarriorWeapon()//Constructeur de la classe WarriorWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Warrior";
	WeaponName = "Arme inconnue";
}
// Méthode pour afficher les informations de l'arme du Warrior
void WarriorWeapon::DisplayWarriorWeapon()
{
	//Affichage des informations de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage :" << PhysicDamage() << "\n";
}
