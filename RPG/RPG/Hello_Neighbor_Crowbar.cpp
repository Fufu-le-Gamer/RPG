#include "Hello_Neighbor_Crowbar.h"

Hello_Neighbor_Crowbar::Hello_Neighbor_Crowbar()//Constructeur de la classe Hello_Neighbor_Crowbar
{
	//Initialisation du nom de l'arme
	WeaponName = "Hello Neighbor Crowbar";
}
//Méthode pour obtenir les dégâts physiques de l'arme Hello_Neighbor_Crowbar
float Hello_Neighbor_Crowbar::PhysicDamage()
{
	//Retourne les dégâts physiques de l'arme Hello_Neighbor_Crowbar
	return 10;
}
