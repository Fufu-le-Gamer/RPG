#include "Elder_Wand.h"

Elder_Wand::Elder_Wand()//Constructeur de la classe Elder_Wand
{
	//Initialisation du nom du type d'arme et du nom de l'arme
	WeaponName = "Elder Wand";
}
//Méthode pour obtenir les dégâts magiques de l'arme Elder_Wand
float Elder_Wand::MagicDamage()
{
	//Retourne les dégâts magiques de l'arme Elder_Wand
	return 50;
}
