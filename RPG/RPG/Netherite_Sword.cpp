#include "Netherite_Sword.h"

Netherite_Sword::Netherite_Sword()//Constructeur de la classe Netherite_Sword
{
	//Initialisation du nom de l'arme
	WeaponName = "Netherite Sword";
}
//Méthode pour obtenir les dégâts physiques de l'arme Netherite Sword
float Netherite_Sword::PhysicDamage()
{
	//Retourne les dégâts physiques de l'arme Netherite Sword
	return 10;
}
