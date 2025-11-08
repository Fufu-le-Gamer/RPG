#include "AssassinWeapon.h"

AssassinWeapon::AssassinWeapon()//Constructeur de la classe AssassinWeapon
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	TypeName = "Assassin";
	WeaponName = "Arme inconnue";
}
//Méthode pour afficher les informations de l'arme de l'Assassin
void AssassinWeapon::DisplayAssassinWeapon()
{
	//Affichage des informations de l'arme
	std::cout << "Weapons of " << TypeName << "\n";
	std::cout << "Weapon choose : " << WeaponName << "\n";
	std::cout << "Damage : " << PhysicDamage() << "\n";
}