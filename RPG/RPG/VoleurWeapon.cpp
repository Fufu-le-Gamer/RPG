#include "VoleurWeapon.h"

VoleurWeapon::VoleurWeapon()//Constructeur de la classe VoleurWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Voleur";
	WeaponName = "Arme inconnue";
}
//Méthode pour afficher les informations de l'arme du Voleur
void VoleurWeapon::DisplayVoleurWeapon()
{
	//Affichage des informations de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << PhysicDamage() << "\n";
}