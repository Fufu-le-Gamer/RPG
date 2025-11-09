#include "Iron_Man_Repulsor_Gauntlet.h"

Iron_Man_Repulsor_Gauntlet::Iron_Man_Repulsor_Gauntlet()//constructeur de la classe Iron_Man_Repulsor_Gauntlet
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	WeaponName = "Iron Man Repulsor Gauntlet";
}
//Méthode pour obtenir les dégâts technologiques de l'arme Iron Man Repulsor Gauntlet
float Iron_Man_Repulsor_Gauntlet::TechnoDamage()
{
	//Retourne les degats technologiques de l'arme
	return 50;
}
