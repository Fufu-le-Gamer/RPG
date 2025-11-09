#include "MageWeapon.h"

MageWeapon::MageWeapon()//Constructeur de la classe MageWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Mage";
	WeaponName = "Arme inconnue";
}
//Méthode pour afficher les informations de l'arme du Mage
void MageWeapon::DisplayMageWeapon()
{
	//Affichage des informations de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage :" << MagicDamage() << "\n";
}
