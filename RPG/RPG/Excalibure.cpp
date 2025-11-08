#include "Excalibure.h"

Excalibure::Excalibure()//Constructeur de la classe Excalibure
{
	//Initialisation du nom de l'arme
	WeaponName = "Excalibure";
}
//Méthode pour obtenir les dégâts physiques de l'arme Excalibure
float Excalibure::PhysicDamage()
{
	//Retourne les dégâts physiques de l'arme Excalibure
	return 50;
}


