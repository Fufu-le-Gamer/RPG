#include "Hollow_Knight_Dagger.h"

Hollow_Knight_Dagger::Hollow_Knight_Dagger()//Constructeur de la classe Hollow_Knight_Dagger
{
	//Initialisation du nom de l'arme
	WeaponName = "Hollow Knight Dagger";
}
//Méthode pour obtenir les dégâts physiques de l'arme Hollow Knight Dagger
float Hollow_Knight_Dagger::PhysicDamage()
{
	//Retourne les dégâts physiques de l'arme Hollow Knight Dagger
	return 50;
}
