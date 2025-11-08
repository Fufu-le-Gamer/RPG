#include "Doctor_Who_Sonic_Screwdriver.h"

Doctor_Who_Sonic_Screwdriver::Doctor_Who_Sonic_Screwdriver()//Constructeur de la classe Doctor_Who_Sonic_Screwdriver
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	WeaponName = "Doctor Who Sonic Screwdriver";
}
//Méthode pour obtenir les dégâts technologiques de l'arme Doctor Who Sonic Screwdriver
float Doctor_Who_Sonic_Screwdriver::TechnoDamage()
{
	//Retourne les dégâts technologiques de l'arme
	return 10;
}
