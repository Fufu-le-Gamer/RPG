#include "Legolas_Bow.h"

Legolas_Bow::Legolas_Bow()//Constructeur de la classe Legolas_Bow
{
	//Initialisation du nom de l'arme
	WeaponName = "Legolas Bow";
}
//Méthode pour obtenir les dégâts de l'arme Legolas Bow
float Legolas_Bow::ArrowDamage()
{
	//Retourne les dégâts de l'arme Legolas Bow
	return 10;
}
