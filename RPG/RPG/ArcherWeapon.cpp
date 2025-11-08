#include "ArcherWeapon.h"

ArcherWeapon::ArcherWeapon()//Constructeur de la classe ArcherWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Archer";
	WeaponName = "Arme inconnue";
}
//Méthode pour afficher les informations de l'arme de l'Archer
void ArcherWeapon::DisplayArcherWeapon()
{
	//Affichage des informations de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << ArrowDamage() << "\n";
}

