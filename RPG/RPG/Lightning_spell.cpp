#include "Lightning_spell.h"

Lightning_spell::Lightning_spell()//Constructeur de la classe Lightning_spell
{
	//Initialisation du nom de l'arme
	WeaponName = "Lightning Spell";
}
//Méthode pour obtenir les dégâts magiques du sort Lightning
float Lightning_spell::MagicDamage()
{
	//Retourne les dégâts magiques du sort Lightning
	return 10;
}
