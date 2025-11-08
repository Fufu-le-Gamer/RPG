#include "Hawkeye_Bow.h"

Hawkeye_Bow::Hawkeye_Bow()//Constructeur de la classe Hawkeye_Bow
{
	//Initialisation du nom de l'arme
	WeaponName = "Hawkeye Bow";
}
//Méthode pour obtenir les dégâts de l'arme Hawkeye Bow
float Hawkeye_Bow::ArrowDamage()
{
	//Retourne les dégâts de l'arme Hawkeye Bow
	return 50;
}
