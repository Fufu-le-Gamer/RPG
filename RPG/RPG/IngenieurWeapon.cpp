#include "IngenieurWeapon.h"

IngenieurWeapon::IngenieurWeapon()//Constructeur de la classe IngenieurWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Ingénieur";
	WeaponName = "Arme inconnue";
}
//Méthode pour afficher les informations de l'arme de l'Ingénieur
void IngenieurWeapon::DisplayIngenieurWeapon()
{
	//Affichage des information de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << TechnoDamage() << "\n";
}


